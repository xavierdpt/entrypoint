#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	for(int i=0 ; i<3 ; ++i) {
		if(isatty(i)) {
			printf("File descriptor %d is a TTY\n",i);
			char* name = ttyname(i);
			if(name == NULL) {
				printf("- Name is unavailable\n");
			} else {
				printf("- Name is %s\n",name);
			}
		} else {
			printf("File descriptor %d is not TTY\n",i);
		}
	}
	return 0;
}
