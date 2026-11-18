CC      ?= cc
CFLAGS  ?= -std=c11 -O2 -Wall -Wextra
SRCDIR   = src
RESDIR   = src/embedded
TARGET   = bin/biosdump
BLOB     = $(SRCDIR)/monster_bios_blob.c
IMAGE   ?= ../monster_bios.bin
OBJS     = $(SRCDIR)/example.o \
           $(SRCDIR)/monster_bios.o \
           $(SRCDIR)/monster_bios_layout.o \
           $(SRCDIR)/monster_bios_blob.o
RES_OBJS = $(RESDIR)/acpi_data.o \
           $(RESDIR)/microcode_data.o \
           $(RESDIR)/images_data.o \
           $(RESDIR)/modules_meta.o

all: $(TARGET) resources

$(BLOB): $(IMAGE) tools/gen_blob.py
	python3 tools/gen_blob.py $< $@

$(TARGET): $(OBJS)
	@mkdir -p bin
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(SRCDIR)/monster_bios.h
	$(CC) $(CFLAGS) -I$(SRCDIR) -c -o $@ $<

# 32 MB'lik ham dizi: derleme suresini kisaltmak icin optimizasyon kapali.
$(SRCDIR)/monster_bios_blob.o: $(BLOB) $(SRCDIR)/monster_bios.h
	$(CC) $(CFLAGS) -O0 -I$(SRCDIR) -c -o $@ $<


resources: $(RES_OBJS)

$(RESDIR)/%.o: $(RESDIR)/%.c $(RESDIR)/resources.h
	$(CC) $(CFLAGS) -O0 -I$(RESDIR) -c -o $@ $<

clean:
	rm -f $(OBJS) $(RES_OBJS) $(TARGET) $(BLOB)

.PHONY: all clean resources blob

blob: $(BLOB)
