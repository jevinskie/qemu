#include "qemu/osdep.h"
#include "disas/dis-asm.h"
#include "qemu/bitops.h"
#include "cpu.h"

typedef disassemble_info DisasContext;

/* Include the auto-generated decoder.  */
#include "decode-insns.c.inc"

#define output(mnemonic, format, ...) \
    (info->fprintf_func(info->stream, "%-9s " format, \
                        mnemonic, ##__VA_ARGS__))

