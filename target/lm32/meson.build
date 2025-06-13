gen = decodetree.process('insns.decode')

lm32_ss = ss.source_set()
lm32_ss.add(gen)
lm32_ss.add(files(
  'cpu.c',
  'disas.c',
  'gdbstub.c',
  'helper.c',
  'lm32-semi.c',
  'op_helper.c',
  'translate.c',
))

lm32_system_ss = ss.source_set()
lm32_system_ss.add(files('machine.c'))

target_arch += {'lm32': lm32_ss}
target_system_arch += {'lm32': lm32_system_ss}
