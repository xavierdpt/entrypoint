#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char** argv) {
	int bufsize = 1;
	while(1) {
		char * buf = malloc(bufsize*sizeof(char));
		int result = gethostname(buf, bufsize);
		if(result == -1) {
	    	if(errno == ENAMETOOLONG) {
			bufsize+=1;
			free(buf);
	    	} else {
			printf("Unknown error\n");
			break;
	    	}
		} else {
			printf("hostname = %s\n", buf);
			free(buf);
			break;
		}
	}
	return 0;
}
