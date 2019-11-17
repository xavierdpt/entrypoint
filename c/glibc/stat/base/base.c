#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char** argv) {
	struct stat stats;
	int result = stat("base.c", &stats);
	if(result == 0) {
	    printf("Success!\n");
	    printf("Mode: 0x%x\n",stats.st_mode);
	    printf("Serial number: 0x%lx\n",stats.st_ino);
	    printf("Device: 0x%lx\n",stats.st_dev);
	    printf("Hard links: %ld\n",stats.st_nlink);
	    printf("User id: %d\n",stats.st_uid);
	    printf("Group id: %d\n",stats.st_gid);
	    printf("Size: %ld\n",stats.st_size);
	    printf("Last access time: %ld\n",stats.st_atime);
	    printf("Last modification time: %ld\n",stats.st_mtime);
	    printf("Last attribute modification time: %ld\n",stats.st_ctime);
	    printf("Number of disk blocks: %ld\n",stats.st_blocks);
	    printf("Best block size: %ld\n",stats.st_blksize);
	} else {
	    printf("Error!\n");
	}
	return 0;
}
