#!/usr/bin/env python3

from collections import namedtuple
from enum import Enum, auto
from dataclasses import dataclass, field
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
    mnemonic: str = field(init=False)
    opc: int
    fmt: Format

    def __set_name__(self, owner: type, name: str) -> None:
        self.mnemonic = name


@dataclass
class LM32Instrs:
    srui: Final = LM32Instr(0b000_000, Format.RI5)
    nori: Final = LM32Instr(0b000_001, Format.RI)


LM32_INSTRS: tuple[LM32Instr, ...] = (
    LM32Instrs.srui,
    LM32Instrs.nori,
)


if __name__ == "__main__":
    pprint.pp(LM32_INSTRS)
