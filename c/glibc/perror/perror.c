#include <stdio.h>
#include <errno.h>

int main(int argc, char** argv) {
	errno = EPERM;
	perror("An error occured");
	errno = ENOENT;
	perror("Another error occured");
	return 0;
}
