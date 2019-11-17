#define _GNU_SOURCE
#include <stdio.h>
#include <errno.h>

int main(int argc, char** argv) {
	printf("Hello from %s\n",program_invocation_name);
	return 0;
}
