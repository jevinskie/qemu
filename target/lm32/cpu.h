#ifndef LM32_CPU_H
#define LM32_CPU_H

#include "cpu-qom.h"
#include "exec/cpu-defs.h"

struct LM32Class {
    CPUClass parent_class;

    DeviceRealize parent_realize;
    ResettablePhases parent_phases;
};

typedef struct CPUArchState {

} CPULM32State;

struct ArchCPU {
    CPUState parent_obj;

    CPULM32State env;
};

#define CPU_RESOLVING_TYPE TYPE_LM32_CPU

#endif
