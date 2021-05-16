#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "spinlock.h"
#include "memlayout.h"
#include "proc.h"

int main(int password) {
#ifdef MLFQ
  argint(0, &password);
  monopolize(password);
#else
  cprintf("Cannot monopolize: not MLFQ");
#endif
}
