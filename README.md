# Monster Tulpar T7 V20.8 — BIOS Notes

[English](#english) | [Türkçe](#turkce) | [License](#license)

This document describes the contents of the 32 MB firmware image.
It is **not** a flashing or modification guide.

Bu belge 32 MB firmware imajının içeriğini tanımlar.
Bir flaşlama veya modifikasyon rehberi **değildir**.

---

<a id="english"></a>
# English

## 1. Identity

The image belongs to a Monster Tulpar T7 V20.8 laptop built on the UNIWILL
GM7AR0R barebone. The firmware is an AMI Aptio image for an Intel Alder
Lake-P platform. The visible BIOS identification string is `N.1.13 MON07`,
dated `2024-01-11`. The SPI flash image is 33,554,432 bytes (32 MB).

| Property | Value |
|---|---|
| Model | Monster Tulpar T7 V20.8 |
| Barebone / board | UNIWILL GM7AR0R |
| Platform | Intel Alder Lake-P |
| Firmware vendor | American Megatrends (AMI Aptio) |
| BIOS version | N.1.13 MON07 |
| BIOS date | 2024-01-11 |
| Image size | 32 MB (0x2000000) |

## 2. Flash layout

The flash descriptor defines three assigned regions: Descriptor, Intel
Management Engine (ME/CSME), and BIOS. The BIOS region is 16 MB and
contains all UEFI firmware volumes. The ME region is separate and was not
analyzed. No GbE, PDR, or EC region is declared by the descriptor.

| Region | Range | Size |
|---|---|---|
| Descriptor | `0x00000000–0x00000FFF` | 4 KB |
| ME / CSME | `0x00001000–0x004B6FFF` | ~4.7 MB |
| BIOS | `0x01000000–0x01FFFFFF` | 16 MB |

The remaining address space is not assigned to a named descriptor region.

## 3. UEFI firmware structure

The BIOS region contains 23 firmware volumes, 616 FFS files, and 1,987
sections, forming 2,630 structural nodes. Of the FFS files, 270 are DXE
drivers, 105 are PEIMs, 56 are SMM drivers, and 142 are free-form files.
There are 450 executable modules: 356 PE32 and 94 TE images.

| Module | Role |
|---|---|
| `DxeCore` | DXE dispatcher and core services |
| `Bds` | Boot Device Selection |
| `Setup` | HII setup forms and Secure Boot key UI |
| `AMITSE` | AMI Setup Engine |
| `SecureBootDXE` | `SecureBootSetup` and `SetupMode` variables |
| `NvramDxe`, `NvramSmm` | NVRAM access |
| `Tpm20PlatformDxe` | TPM 2.0 platform support |
| `CpuDxe`, `PiSmmCpuDxeSmm` | CPU initialization and SMM CPU |
| `FmpDxe` (multiple) | Firmware Management Protocol |
| `SiInitPreMemFsp` | Intel FSP pre-memory silicon init |
| `OemServiceSmm` | OEM SMM services, including a `RomLogo` command handler |

The `Setup` module is the largest UI-related binary (~1.09 MB) and contains
the setup form strings, including Secure Boot key management.

## 4. ACPI

The extracted static ACPI content consists of 25 tables: one DSDT
(622,790 bytes, OEM ID `ALASKA`, OEM table ID `A M I`) and 24 SSDTs.
Notable SSDTs cover CPU, SoC, GPE, graphics, Thunderbolt/USB4, thermal,
and platform devices, for example `CpuRef`, `SocGpe`, `SocCmn`,
`IgfxSsdt`, `TcssSsdt`, `DTbtSsdt`, `UsbCTabl`, and `Ther_Rvp`.
Tables such as FACP, APIC, and DMAR are not present as static blobs in this
set; they are expected to be generated at boot.

| SSDT OEM / table | Area |
|---|---|
| `AmdBrD` / `AmdBrgDT` | AMD bridge reference |
| `CpuRef` / `CpuSsdt` | CPU topology and power |
| `SocGpe` / `SocGpe` | SoC general-purpose events |
| `INTEL` / `IgfxSsdt` | Integrated graphics |
| `INTEL` / `TcssSsdt` | Type-C / USB4 subsystem |
| `INTEL` / `DTbtSsdt` | Discrete Thunderbolt |
| `TherRv` / `Ther_Rvp` | Thermal policy |

## 5. Microcode

The image contains three Intel microcode blobs. They target different CPUID
families and carry 2022 revisions.

| CPUID | Revision | Date | Size |
|---|---|---|---|
| `000906A3` | `0x00000424` | 2022-09-19 | 217,088 B |
| `000B06A2` | `0x00004106` | 2022-09-05 | 206,848 B |
| `00090672` | `0x00000025` | 2022-08-01 | 219,136 B |

## 6. Graphics and UI resources

The firmware contains 106 embedded images used by setup and early boot UI:
the AMI logo (378×100 BMP), setup backgrounds (1024×768 and 1024×600),
navigation icons, checkboxes, arrows, frames, and status graphics. No
Monster-branded logo image was found in the BIOS region. Monster branding
appears as DMI/BSA strings, not as a bitmap; the power-on logo is therefore
likely provided by the embedded controller (EC) firmware.

## 7. Secure Boot and key management

The firmware exposes an AMI Secure Boot key management UI in the `Setup`
module. The menu strings include:

- Key Management
- Reset To Setup Mode
- Restore Factory Keys
- Delete Security Key/Database
- Delete all Secure Boot key databases from NVRAM
- Install factory default Secure Boot key databases
- Export Secure Boot variables

`SecureBootDXE` reads and writes the `SecureBootSetup` and `SetupMode`
variables. Default/public certificate subjects visible in the image include
`UNIWILL Tech UEFI Secure Boot 2019 PK0`, `UNIWILL Tech UEFI Secure Boot 2019
KEK0`, `UNIWILL Tech BIOS 2019 Root CA`, and `Microsoft Corporation UEFI CA
2011`. These are public certificate identities; no private key material is
present in the extracted text outputs.

| UI option | Effect |
|---|---|
| Reset To Setup Mode | Removes the Platform Key and enters Setup Mode |
| Restore Factory Keys | Reinstalls built-in default keys |
| Delete all Secure Boot key databases | Clears PK/KEK/db/dbx from NVRAM |
| Export Secure Boot variables | Exports variables for backup |

## 8. Boot Guard

Boot Guard-related strings and structures are present, including `Boot Guard
ACM Policy Status`, `Boot Guard SACM Information`, `BootGuard S-ACM
v%d.%d.%d`, and a FIT table. This indicates firmware integrity support at
the platform level. The actual fuse configuration cannot be determined from
the image alone. Modifying and flashing the firmware is therefore unsafe:
Boot Guard may reject a modified image or the device may fail to boot.

## 9. Data safety

The raw flash image can contain machine-specific data: DMI/BSA serial and
UUID strings, a Windows product key in an unallocated area, NVRAM contents,
and ME/CSME data. For this reason the raw image is kept outside the source
tree and must not be shared. The extracted text and decompiled outputs were
filtered: no product key, MAC address, private key, or serial-like value
remains in them. Public vendor certificates may still appear in module
binaries; these are public identities, not secrets.

## 10. Repository contents

`src/monster_bios_layout.c` holds the 2,630-node firmware tree;
`src/monster_bios.h` and `src/monster_bios.c` provide the query API.
`src/decompiled/` contains C-like pseudocode for all 450 modules, with an
index in `src/decompiled/index.csv`. `src/embedded/` holds the extracted
ACPI, microcode, image arrays, and module metadata. `extracted/acpi/`
contains the raw ACPI tables and ASL sources; `extracted/modules/`,
`extracted/microcode/`, `extracted/images/`, and `extracted/strings/`
contain the corresponding extracted artifacts. `extracted/info/` contains
the summary and exclusion notes.

The decompiled output is pseudocode, not original source, and is not
compilable.

## 11. Limits

The ME/CSME region was not analyzed. Static ACPI content is limited to DSDT
and SSDTs; runtime-generated tables are not included. Some setup HII/IFR
forms were not expanded. 120 of 46,829 decompiled functions could not be
recovered. The image is not intended for flashing.

---

<a id="turkce"></a>
# Türkçe

## 1. Kimlik

İmaj, UNIWILL GM7AR0R barebone üzerine kurulu bir Monster Tulpar T7 V20.8
dizüstü bilgisayara aittir. Firmware, Intel Alder Lake-P platformu için AMI
Aptio imajıdır. Görünen BIOS kimlik string'i `N.1.13 MON07`, tarihi
`2024-01-11`'dir. SPI flash imajı 33.554.432 bayt (32 MB).

| Özellik | Değer |
|---|---|
| Model | Monster Tulpar T7 V20.8 |
| Barebone / anakart | UNIWILL GM7AR0R |
| Platform | Intel Alder Lake-P |
| Firmware üreticisi | American Megatrends (AMI Aptio) |
| BIOS sürümü | N.1.13 MON07 |
| BIOS tarihi | 2024-01-11 |
| İmaj boyutu | 32 MB (0x2000000) |

## 2. Flash yerleşimi

Flash descriptor üç atanmış bölge tanımlar: Descriptor, Intel Management
Engine (ME/CSME) ve BIOS. BIOS bölgesi 16 MB'dir ve tüm UEFI firmware
volume'larını içerir. ME bölgesi ayrıdır ve analiz edilmemiştir. Descriptor
tarafından GbE, PDR veya EC bölgesi tanımlanmamıştır.

| Bölge | Aralık | Boyut |
|---|---|---|
| Descriptor | `0x00000000–0x00000FFF` | 4 KB |
| ME / CSME | `0x00001000–0x004B6FFF` | ~4,7 MB |
| BIOS | `0x01000000–0x01FFFFFF` | 16 MB |

Descriptor'ın geri kalan adres alanı adlandırılmış bir bölgeye atanmamıştır.

## 3. UEFI firmware yapısı

BIOS bölgesi 23 firmware volume, 616 FFS dosyası ve 1.987 section içerir;
toplam 2.630 yapısal düğüm oluşur. FFS dosyalarının 270'i DXE sürücüsü,
105'i PEIM, 56'sı SMM sürücüsü, 142'si serbest biçimli dosyadır. 356 PE32 ve
94 TE olmak üzere 450 çalıştırılabilir modül vardır.

| Modül | Görev |
|---|---|
| `DxeCore` | DXE dağıtıcısı ve çekirdek servisleri |
| `Bds` | Önyükleme cihazı seçimi |
| `Setup` | HII setup formları ve Secure Boot anahtar arayüzü |
| `AMITSE` | AMI setup motoru |
| `SecureBootDXE` | `SecureBootSetup` ve `SetupMode` değişkenleri |
| `NvramDxe`, `NvramSmm` | NVRAM erişimi |
| `Tpm20PlatformDxe` | TPM 2.0 platform desteği |
| `CpuDxe`, `PiSmmCpuDxeSmm` | CPU başlatma ve SMM CPU |
| `FmpDxe` (birden fazla) | Firmware güncelleme protokolü |
| `SiInitPreMemFsp` | Intel FSP bellek öncesi silicon init |
| `OemServiceSmm` | OEM SMM servisleri; `RomLogo` komut işleyicisi |

`Setup` modülü, Secure Boot anahtar yönetimi dahil setup form string'lerini
içeren en büyük arayüz binary'sidir (~1,09 MB).

## 4. ACPI

Çıkarılan statik ACPI içeriği 25 tablodan oluşur: bir DSDT (622.790 bayt,
OEM ID `ALASKA`, OEM tablo ID `A M I`) ve 24 SSDT. Öne çıkan SSDT'ler CPU,
SoC, GPE, grafik, Thunderbolt/USB4, termal ve platform cihazlarını kapsar;
örnekler: `CpuRef`, `SocGpe`, `SocCmn`, `IgfxSsdt`, `TcssSsdt`, `DTbtSsdt`,
`UsbCTabl`, `Ther_Rvp`. FACP, APIC ve DMAR gibi tablolar bu statik sette
blob olarak bulunmaz; açılışta üretilmeleri beklenir.

| SSDT OEM / tablo | Alan |
|---|---|
| `AmdBrD` / `AmdBrgDT` | AMD köprü referansı |
| `CpuRef` / `CpuSsdt` | CPU topolojisi ve güç |
| `SocGpe` / `SocGpe` | SoC genel amaçlı olaylar |
| `INTEL` / `IgfxSsdt` | Tümleşik grafik |
| `INTEL` / `TcssSsdt` | Type-C / USB4 alt sistemi |
| `INTEL` / `DTbtSsdt` | Ayrık Thunderbolt |
| `TherRv` / `Ther_Rvp` | Termal politika |

## 5. Microcode

İmaj üç Intel microcode bloğu içerir. Farklı CPUID ailelerine yöneliktir ve
2022 revizyonları taşır.

| CPUID | Revizyon | Tarih | Boyut |
|---|---|---|---|
| `000906A3` | `0x00000424` | 2022-09-19 | 217.088 B |
| `000B06A2` | `0x00004106` | 2022-09-05 | 206.848 B |
| `00090672` | `0x00000025` | 2022-08-01 | 219.136 B |

## 6. Görsel ve arayüz kaynakları

Firmware, setup ve erken önyükleme arayüzünde kullanılan 106 gömülü görsel
içerir: AMI logosu (378×100 BMP), setup arka planları (1024×768 ve
1024×600), gezinme ikonları, onay kutuları, oklar, çerçeveler ve durum
grafikleri. BIOS bölgesinde Monster markalı bir logo görseli bulunmadı.
Monster markası bitmap olarak değil, DMI/BSA string'leri olarak görünür; bu
nedenle açılış logosu büyük ihtimalle gömülü denetleyici (EC) firmware'inden
gelir.

## 7. Secure Boot ve anahtar yönetimi

Firmware, `Setup` modülünde AMI Secure Boot anahtar yönetimi arayüzü sunar.
Menü string'leri şunları içerir:

- Key Management
- Reset To Setup Mode
- Restore Factory Keys
- Delete Security Key/Database
- Delete all Secure Boot key databases from NVRAM
- Install factory default Secure Boot key databases
- Export Secure Boot variables

`SecureBootDXE`, `SecureBootSetup` ve `SetupMode` değişkenlerini okur ve
yazar. İmajda görünen varsayılan/genel sertifika konuları arasında `UNIWILL
Tech UEFI Secure Boot 2019 PK0`, `UNIWILL Tech UEFI Secure Boot 2019 KEK0`,
`UNIWILL Tech BIOS 2019 Root CA` ve `Microsoft Corporation UEFI CA 2011`
bulunur. Bunlar genel sertifika kimlikleridir; çıkarılan metin çıktılarında
private key materyali yoktur.

| Arayüz seçeneği | Etkisi |
|---|---|
| Reset To Setup Mode | Platform Key'i siler ve Setup Mode'a geçer |
| Restore Factory Keys | Yerleşik varsayılan anahtarları geri yükler |
| Delete all Secure Boot key databases | PK/KEK/db/dbx'i NVRAM'den siler |
| Export Secure Boot variables | Değişkenleri yedekler |

## 8. Boot Guard

Boot Guard ile ilgili string ve yapılar mevcuttur: `Boot Guard ACM Policy
Status`, `Boot Guard SACM Information`, `BootGuard S-ACM v%d.%d.%d` ve bir
FIT tablosu. Bu, platform düzeyinde firmware bütünlüğü desteğine işaret
eder. Gerçek fuse yapılandırması tek başına imajdan belirlenemez. Bu nedenle
firmware'i modifiye edip flaşlamak güvenli değildir: Boot Guard modifiye
imajı reddedebilir veya cihaz açılmayabilir.

## 9. Veri güvenliği

Ham flash imajı makineye özel veri içerebilir: DMI/BSA seri ve UUID
string'leri, atanmamış bir alanda Windows ürün anahtarı, NVRAM içeriği ve
ME/CSME verisi. Bu nedenle ham imaj kaynak ağacının dışında tutulur ve
paylaşılmamalıdır. Çıkarılan metin ve decompile çıktıları filtrelenmiştir;
içlerinde ürün anahtarı, MAC adresi, private key veya seri benzeri değer
kalmamıştır. Modül binary'lerinde public vendor sertifikaları bulunabilir;
bunlar genel kimliklerdir, sır değildir.

## 10. Depo içeriği

`src/monster_bios_layout.c` 2.630 düğümlü firmware ağacını tutar;
`src/monster_bios.h` ve `src/monster_bios.c` sorgu API'sini sağlar.
`src/decompiled/` 450 modülün tamamı için C-benzeri pseudocode içerir;
indeks `src/decompiled/index.csv` dosyasındadır. `src/embedded/` çıkarılan
ACPI, microcode, görsel dizilerini ve modül metadata'sını tutar.
`extracted/acpi/` ham ACPI tablolarını ve ASL kaynaklarını;
`extracted/modules/`, `extracted/microcode/`, `extracted/images/` ve
`extracted/strings/` ilgili çıkarılmış bileşenleri içerir.
`extracted/info/` özet ve dışlama notlarını içerir.

Decompile çıktısı orijinal kaynak değil, pseudocode'dur ve derlenemez.

## 11. Sınırlar

ME/CSME bölgesi analiz edilmedi. Statik ACPI içeriği DSDT ve SSDT'lerle
sınırlıdır; çalışma anında üretilen tablolar dahil değildir. Bazı setup
HII/IFR formları açılmadı. 46.829 decompile fonksiyonunun 120'si geri
kazanılamadı. İmaj flaşlama için değildir.

---

<a id="license"></a>
## License / Lisans

The original code and documentation in this repository are released under
the MIT License; see `LICENSE`. Extracted firmware components, vendor
binaries, ACPI tables, images, and trademarks remain the property of their
respective owners and are not covered by this license. This project is not
affiliated with Monster, UNIWILL, Intel, or AMI.

Bu depodaki özgün kod ve dokümantasyon MIT Lisansı ile yayımlanmıştır; bkz.
`LICENSE`. Çıkarılan firmware bileşenleri, üretici binary'leri, ACPI
tabloları, görseller ve ticari markalar ilgili sahiplerinin mülkiyetindedir
ve bu lisans kapsamında değildir. Bu proje Monster, UNIWILL, Intel veya AMI
ile bağlantılı değildir.
