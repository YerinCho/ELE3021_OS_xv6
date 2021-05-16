#include "types.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "proc.h"
#include "defs.h"

int sys_setpriority(int pid, int priority) {
#ifdef MLFQ
  argint(0, &pid);
  argint(1, &priority);
  return setpriority(pid, priority);
#endif
  return -1;
}
