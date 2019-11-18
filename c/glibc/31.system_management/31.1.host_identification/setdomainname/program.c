#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
	int result = setdomainname("hello",5);
	if(result == -1) {
		printf("%s\n",strerror(errno));
	} else {
		printf("Success !\n");
	}
	return 0;
}
