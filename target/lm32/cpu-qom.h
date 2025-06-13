#ifndef QEMU_LM32_CPU_QOM_H
#define QEMU_LM32_CPU_QOM_H

#include "hw/core/cpu.h"

#define TYPE_LM32_CPU "lm32-cpu"

OBJECT_DECLARE_CPU_TYPE(LM32CPU, LM32CPUClass, LM32_CPU)

#define LM32_CPU_TYPE_SUFFIX "-" TYPE_LM32_CPU
#define LM32_CPU_TYPE_NAME(model) model LM32_CPU_TYPE_SUFFIX

#endif
