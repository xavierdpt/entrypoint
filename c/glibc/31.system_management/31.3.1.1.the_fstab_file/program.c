#define _GNU_SOURCE
#include <stdio.h>
#include <fstab.h>

int main(int argc, char** argv) {
	int result = setfsent();
	if(result!=0) {
		int n=0;
		while(1) {
			struct fstab* entry = getfsent();
			if(entry == NULL) {
				break;
			}
			if(n!=0) {
				printf("\n");
			}
			++n;
			printf("fs_spec = %s\n", entry->fs_spec);
			printf("fs_file = %s\n", entry->fs_file);
			printf("fs_vfstype = %s\n", entry->fs_vfstype);
			printf("fs_mntops = %s\n", entry->fs_mntops);
			printf("fs_type = %s\n", entry->fs_type);
			printf("fs_freq = %d\n", entry->fs_freq);
			printf("fs_passno = %d\n", entry->fs_passno);
		}
		endfsent();
	} else {
		printf("Could not initialize fstab processing (%d)\n", result);
	}
}
