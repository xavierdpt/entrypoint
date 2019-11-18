#define _GNU_SOURCE
#include <stdio.h>
#include <mntent.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
	FILE* mtab = setmntent(_PATH_MOUNTED,"r");
	if(mtab==NULL) {
		printf("Could not open the mtab file\n");
		printf("%s\n",strerror(errno));
	} else {
		while(1) {
			struct mntent* entry = getmntent(mtab);
			if(entry == NULL) {
				break;
			}
			printf("mnt_fsname = %s\n", entry->mnt_fsname);
			printf("mnt_dir = %s\n", entry->mnt_dir);
			printf("mnt_type = %s\n", entry->mnt_type);
			printf("mnt_opts = %s\n", entry->mnt_opts);
			printf("mnt_freq = %d\n", entry->mnt_freq);
			printf("mnt_passno = %d\n", entry->mnt_passno);
			printf("\n");
		}
		int result = endmntent(mtab);
		if(result == 0) {
			printf("Cleanup failed\n");
		}
	}
}
