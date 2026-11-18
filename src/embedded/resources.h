#ifndef BIOS_RESOURCES_H
#define BIOS_RESOURCES_H

#include <stddef.h>

typedef struct {
    const char          *category;
    const char          *name;
    const char          *meta1;
    const char          *meta2;
    unsigned int         declared_size;
    const unsigned char *data;
    size_t               data_len;
} bios_resource_t;

typedef struct {
    unsigned int node;
    const char  *name;
    const char  *format;
    const char  *guid;
    const char  *file;
    const char  *c_file;
    unsigned int offset;
    unsigned int ffs_size;
} bios_module_t;

extern const bios_resource_t bios_acpi_resources[];
extern const size_t          bios_acpi_resources_count;

extern const bios_resource_t bios_microcode_resources[];
extern const size_t          bios_microcode_resources_count;

extern const bios_resource_t bios_image_resources[];
extern const size_t          bios_image_resources_count;

extern const bios_module_t   bios_modules[];
extern const size_t          bios_module_count;

#endif
