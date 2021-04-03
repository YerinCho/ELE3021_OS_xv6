#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	char* buf = "Hello xv6!";
	int ret = myfunction(buf);
	printf(1, "Return value: 0x%x\n", ret);
	exit();
}
