#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "spinlock.h"
#include "memlayout.h"
#include "proc.h"

int sys_getlev() {
#ifdef MLFQ
  return getlev();
#endif
  return -1;
}
