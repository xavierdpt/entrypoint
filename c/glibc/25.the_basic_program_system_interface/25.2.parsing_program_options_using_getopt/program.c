#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	int c;
	opterr=0;
	while( (c = getopt(argc, argv, "abc")) != -1 ) {
		switch(c) {
			case 'a':
				printf("Found a\n");
				break;
			case 'b':
				printf("Found b\n");
				break;
			case 'c':
				printf("Found c\n");
				break;
			case '?':
				printf("Found something else\n");
				break;
			default:
				printf("What ?\n");
		}
	}
	int i;
	for( i = optind ; i < argc ; ++i) {
		printf("Remaining argument: %s\n", argv[i]);
	}
	return 0;
}
