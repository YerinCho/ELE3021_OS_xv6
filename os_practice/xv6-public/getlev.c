#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "spinlock.h"
#include "memlayout.h"
#include "proc.h"

int main() {
  int lev = getlev();
  if (lev == -1) {
    cprintf("Cannot get level of process: not MLFQ");
  }
  return lev;
}
