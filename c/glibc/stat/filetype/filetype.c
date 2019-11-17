#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char** argv) {
	struct stat stats;
	int result = stat("filetype.c", &stats);
	if(result == 0) {
	    printf("Success!\n");
	    mode_t mode = stats.st_mode;
	    printf("Mode: 0x%x\n",stats.st_mode);
	    printf("Directory ? %s\n", S_ISDIR(mode) ? "yes" : "no" );
	    printf("Special ? %s\n", S_ISCHR(mode) ? "yes" : "no" );
	    printf("Block ? %s\n", S_ISBLK(mode) ? "yes" : "no" );
	    printf("Regular ? %s\n", S_ISREG(mode) ? "yes" : "no" );
	    printf("FIFO ? %s\n", S_ISFIFO(mode) ? "yes" : "no" );
	    printf("Link ? %s\n", S_ISLNK(mode) ? "yes" : "no" );
	    printf("Socket ? %s\n", S_ISSOCK(mode) ? "yes" : "no" );
	    printf("POSIX message queue ? %s\n", S_TYPEISMQ(&stats) ? "yes" : "no" );
	    printf("POSIX semaphore ? %s\n", S_TYPEISSEM(&stats) ? "yes" : "no" );
	    printf("POSIX shared memory object? %s\n", S_TYPEISSHM(&stats) ? "yes" : "no" );
	} else {
	    printf("Error!\n");
	}
	return 0;
}
