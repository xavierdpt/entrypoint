#define _GNU_SOURCE
#include <stdio.h>
#include <sys/auxv.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
	unsigned long int val;

	val = getauxval(AT_BASE);
	printf("AT_BASE = 0x%lx\n", val);

	val = getauxval(AT_BASE_PLATFORM);
	if(val == 0) {
		printf("AT_BASE_PLATFORM is null\n");
	} else {
		printf("AT_BASE_PLATFORM = %s\n", (char*)val);
	}

	val = getauxval(AT_CLKTCK);
	printf("AT_CLKTCK = %ld\n", val);

	val = getauxval(AT_DCACHEBSIZE);
	printf("AT_DCACHEBSIZE = %ld\n", val);

	val = getauxval(AT_EGID);
	printf("AT_EGID = %ld\n", val);

	val = getauxval(AT_ENTRY);
	printf("AT_ENTRY = 0x%lx\n", val);

	val = getauxval(AT_EUID);
	printf("AT_EUID = %ld\n", val);

	val = getauxval(AT_EXECFD);
	printf("AT_EXECFD = %ld\n", val);

	val = getauxval(AT_EXECFN);
	if(val == 0) {
		printf("AT_EXECFN is null\n");
	} else {
		printf("AT_EXECFN = %s\n", (char*)val);
	}

	val = getauxval(AT_FLAGS);
	printf("AT_FLAGS = 0x%lx\n", val);

	val = getauxval(AT_FPUCW);
	printf("AT_FPUCW = 0x%lx\n", val);

	val = getauxval(AT_GID);
	printf("AT_GID = %ld\n", val);

	val = getauxval(AT_HWCAP);
	printf("AT_HWCAP = 0x%lx\n", val);

	val = getauxval(AT_HWCAP2);
	printf("AT_HWCAP2 = 0x%lx\n", val);

	val = getauxval(AT_ICACHEBSIZE);
	printf("AT_ICACHEBSIZE = %ld\n", val);

	val = getauxval(AT_PAGESZ);
	printf("AT_PAGESZ = %ld\n", val);

	val = getauxval(AT_PHDR);
	printf("AT_PHDR = 0x%lx\n", val);

	val = getauxval(AT_PHENT);
	printf("AT_PHENT = %ld\n", val);

	val = getauxval(AT_PHNUM);
	printf("AT_PHNUM = %ld\n", val);

	val = getauxval(AT_PLATFORM);
	if(val == 0) {
		printf("AT_PLATFORM is null\n");
	} else {
		printf("AT_PLATFORM = %s\n", (char*)val);
	}

	val = getauxval(AT_RANDOM);
	printf("AT_RANDOM = 0x%lx\n", val);

	val = getauxval(AT_SECURE);
	printf("AT_SECURE = 0x%lx\n", val);

	val = getauxval(AT_SYSINFO);
	printf("AT_SYSINFO = 0x%lx\n", val);

	val = getauxval(AT_SYSINFO_EHDR);
	printf("AT_SYSINFO_EHDR = 0x%lx\n", val);

	val = getauxval(AT_UCACHEBSIZE);
	printf("AT_UCACHEBSIZE = %ld\n", val);

	val = getauxval(AT_UID);
	printf("AT_UID = %ld\n", val);

	return 0;
}
