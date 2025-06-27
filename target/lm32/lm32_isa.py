#!/usr/bin/env python3

from enum import Enum, auto
from dataclasses import dataclass
from typing import Final

import pprint


OpBits: Final[int] = 6

class Format(Enum):
    RI = auto()
    RR = auto()
    CR = auto()
    IMM = auto()
    RI5 = auto()
    RAISE = auto()
    SEXT = auto()
    CALLBR = auto()


@dataclass
class LM32Instr:
    mnemonic: str
    opc: int
    fmt: Format


class LM32Instrs:
    srui: Final = LM32Instr("srui", 0b000_000, Format.RI5)
    nori: Final = LM32Instr("nori", 0b000_001, Format.RI)
    # FIXME: need the following with either a descriptor or metaclass - I forget
    # srui: Final = LM32Instr(0b000_000, Format.RI5)
    # nori: Final = LM32Instr(0b000_001, Format.RI)

LM32_INSTRS: tuple[LM32Instr, ...] = (
    LM32Instrs.srui,
    LM32Instr("nori", 0b000_001, Format.RI),
)


if __name__ == "__main__":
    pprint.pp(LM32_INSTRS)
