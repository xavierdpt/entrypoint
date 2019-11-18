#define _GNU_SOURCE
#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv) {

#ifdef ARG_MAX
	printf("ARG_MAX = %d\n", ARG_MAX);
#else
	printf("ARG_MAX is not defined\n");
#endif
	printf("_POSIX_ARG_MAX = %d\n", _POSIX_ARG_MAX);
	printf("\n");

#ifdef CHILD_MAX
	printf("CHILD_MAX = %d\n", CHILD_MAX);
#else
	printf("CHILD_MAX is not defined\n");
#endif
	printf("_POSIX_CHILD_MAX = %d\n", _POSIX_CHILD_MAX);
	printf("\n");

#ifdef OPEN_MAX
	printf("OPEN_MAX = %d\n", OPEN_MAX);
#else
	printf("OPEN_MAX is not defined\n");
#endif
	printf("_POSIX_OPEN_MAX = %d\n", _POSIX_OPEN_MAX);
	printf("\n");

#ifdef STREAM_MAX
	printf("STREAM_MAX = %d\n", STREAM_MAX);
#else
	printf("STREAM_MAX is not defined\n");
#endif
	printf("_POSIX_STREAM_MAX = %d\n", _POSIX_STREAM_MAX);
	printf("\n");

#ifdef TZNAME_MAX
	printf("TZNAME_MAX = %d\n", TZNAME_MAX);
#else
	printf("TZNAME_MAX is not defined\n");
#endif
	printf("_POSIX_TZNAME_MAX = %d\n", _POSIX_TZNAME_MAX);
	printf("\n");

#ifdef NGROUPS_MAX
	printf("NGROUPS_MAX = %d\n", NGROUPS_MAX);
#else
	printf("NGROUPS_MAX is not defined\n");
#endif
	printf("_POSIX_NGROUPS_MAX = %d\n", _POSIX_NGROUPS_MAX);
	printf("\n");

#ifdef SSIZE_MAX
	printf("SSIZE_MAX = %ld\n", SSIZE_MAX);
#else
	printf("SSIZE_MAX is not defined\n");
#endif
	printf("_POSIX_SSIZE_MAX = %d\n", _POSIX_SSIZE_MAX);
	printf("\n");

#ifdef RE_DUP_MAX
	printf("RE_DUP_MAX = %d\n", RE_DUP_MAX);
#else
	printf("RE_DUP_MAX is not defined\n");
#endif
	printf("_POSIX_RE_DUP_MAX = %d\n", _POSIX_RE_DUP_MAX);
	printf("\n");

	return 0;
}
