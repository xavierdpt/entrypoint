#define _GNU_SOURCE
#include <stdio.h>
#include <sys/utsname.h>

int main(int argc, char** argv) {
	struct utsname info;
	int result = uname(&info);
	if(result == -1) {
		printf("Error\n");
	} else {
		printf("sysname: %s\n", info.sysname);
		printf("release: %s\n", info.release);
		printf("version: %s\n", info.version);
		printf("machine: %s\n", info.machine);
		printf("nodename: %s\n", info.nodename);
		printf("domainname: %s\n", info.domainname);
	}
	return 0;
}
