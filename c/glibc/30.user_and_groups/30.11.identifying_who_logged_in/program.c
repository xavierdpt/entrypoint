#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	printf("Hello %s\n", getlogin());
	printf("Hello %s\n", cuserid(NULL));
	return 0;
}
