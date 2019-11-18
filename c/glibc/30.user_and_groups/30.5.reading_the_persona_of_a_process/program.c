#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	uid_t uid = getuid();
	gid_t gid = getgid();
	printf("uid = %d\n", uid);
	printf("gid = %d\n", gid);

	uid_t euid = geteuid();
	gid_t egid = getegid();
	printf("euid = %d\n", euid);
	printf("egid = %d\n", egid);

	int ngroups = getgroups(0, NULL);
	if(ngroups == -1) {
		printf("Error occured: %s\n", strerror(errno));
	} else {
		gid_t* groups = malloc(sizeof(gid_t)*ngroups);
		ngroups = getgroups(ngroups, groups);
		if(ngroups == -1) {
			printf("Error occured: %s\n", strerror(errno));
		} else {
			for(int i = 0 ; i < ngroups ; ++i) {
				printf("Group %d\n", groups[i]);
			}
		}
	}
	return 0;
}
