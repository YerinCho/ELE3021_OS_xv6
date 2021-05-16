#include "types.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "proc.h"
#include "defs.h"

void sys_monopolize(int password) {
#ifdef MLFQ
  argint(0, &password);
  monopolize(password);
#else
  cprintf("Cannot monopolize: not MLFQ");
#endif
}
