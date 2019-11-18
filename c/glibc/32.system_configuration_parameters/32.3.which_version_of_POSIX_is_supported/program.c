#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {

	printf("_POSIX_VERSION = %ld\n", _POSIX_VERSION);
	printf("_POSIX2_C_VERSION = %ld\n", _POSIX2_C_VERSION);
	return 0;
}
