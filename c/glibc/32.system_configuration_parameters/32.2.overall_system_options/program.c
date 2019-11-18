#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {

#ifdef _POSIX_JOB_CONTROL
	printf("Job control is supported\n");
#else
	printf("Job control is not supported\n");
#endif

#ifdef _POSIX_SAVED_IDS
	printf("System remembers effective user and group IDs\n");
#else
	printf("System does not remember effective user and group IDs\n");
#endif

#ifdef _POSIX2_C_DEV
	if(_POSIX2_C_DEV == -1) {
		printf("System does not have a c89 compiler\n");
	} else {
		printf("System has a c89 compiler\n");
	}
#else
	printf("System may have a c89 compiler\n");
#endif

#ifdef _POSIX2_FORT_DEV
	if(_POSIX2_FORT_DEV == -1) {
		printf("System does not have a fortran compiler\n");
	} else {
		printf("System has a fortran compiler\n");
	}
#else
	printf("System may have a fortran compiler\n");
#endif

#ifdef _POSIX2_FORT_RUN
	if(_POSIX2_FORT_RUN == -1) {
		printf("System does not have the asa command\n");
	} else {
		printf("System has the asa command\n");
	}
#else
	printf("System may have the asa command\n");
#endif

#ifdef _POSIX2_LOCALEDEF
	if(_POSIX2_LOCALEDEF == -1) {
		printf("System does not have the localedef command\n");
	} else {
		printf("System has the localedef command\n");
	}
#else
	printf("System may have the localedef command\n");
#endif

#ifdef _POSIX2_SW_DEV
	if(_POSIX2_SW_DEV == -1) {
		printf("System does not have the ar, make and strip commands\n");
	} else {
		printf("System has the ar, make and strip commands\n");
	}
#else
	printf("System may have the ar, make and strip commands\n");
#endif


	return 0;
}
