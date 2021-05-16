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
  int lev = getlev();
  if (lev == -1) {
//    printf(0, "Cannot get level of process: not MLFQ");
  }
  return lev;
#endif
  return -1;
}
