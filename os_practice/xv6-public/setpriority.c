#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"
#include "x86.h"
#include "param.h"
#include "spinlock.h"
#include "memlayout.h"
#include "proc.h"

int main(int pid, int priority) {
  argint(0, &pid);
  argint(1, &priority);
  return setpriority(pid, priority);
}
