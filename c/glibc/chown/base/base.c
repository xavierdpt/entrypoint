#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	int result = chown("base.c", 1001, 1001);
	if(result == 0) {
	    printf("Success!\n");
	} else {
	    printf("Error!\n");
	}
	return 0;
}
