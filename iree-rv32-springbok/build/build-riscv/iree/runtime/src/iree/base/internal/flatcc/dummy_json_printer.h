#ifndef DUMMY_JSON_PRINTER_H
#define DUMMY_JSON_PRINTER_H

/* Generated by flatcc 0.6.2 FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_json_printer.h"
#include "flatcc/flatcc_prologue.h"

static void iree_flatcc___IncludeWorkaround_print_json_struct(flatcc_json_printer_t *ctx, const void *p);

static void iree_flatcc___IncludeWorkaround_print_json_struct(flatcc_json_printer_t *ctx, const void *p)
{
    flatcc_json_printer_int32_struct_field(ctx, 0, p, 0, "reserved", 8);
}

static inline int iree_flatcc___IncludeWorkaround_print_json_as_root(flatcc_json_printer_t *ctx, const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_json_printer_struct_as_root(ctx, buf, bufsiz, fid, iree_flatcc___IncludeWorkaround_print_json_struct);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* DUMMY_JSON_PRINTER_H */
