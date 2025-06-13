#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qemu/qemu-print.h"
#include "cpu.h"

#define DEFINE_LM32_CPU_TYPE(type_name, cinit, initfn) \
    {                                                    \
        .name = type_name,                               \
        .parent = TYPE_LM32_CPU,                       \
        .class_init = cinit,                             \
        .instance_init = initfn,                         \
    }
static const TypeInfo lm32_cpu_type_infos[] = {
    {
        .name = TYPE_LM32_CPU,
        .parent = TYPE_CPU,
        .instance_size = sizeof(LM32CPU),
        .instance_align = __alignof(LM32CPU),
        .instance_init = lm32_cpu_initfn,
        .abstract = true,
        .class_size = sizeof(LM32CPUClass),
        .class_init = lm32_cpu_class_init,
    },
    DEFINE_LM32_CPU_TYPE(TYPE_SH7750R_CPU, sh7750r_class_init,
                           sh7750r_cpu_initfn),
    DEFINE_LM32_CPU_TYPE(TYPE_SH7751R_CPU, sh7751r_class_init,
                           sh7751r_cpu_initfn),
    DEFINE_LM32_CPU_TYPE(TYPE_SH7785_CPU, sh7785_class_init,
                           sh7785_cpu_initfn),

};

DEFINE_TYPES(lm32_cpu_type_infos)

