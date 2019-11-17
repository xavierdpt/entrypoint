#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
	char* message = strerror(EPERM);
	printf("%s\n",message);
	message = strerror(ENOENT);
	printf("%s\n",message);
	return 0;
}
