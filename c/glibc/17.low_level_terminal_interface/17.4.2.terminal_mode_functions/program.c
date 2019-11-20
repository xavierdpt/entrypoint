#include <stdio.h>
#include <termios.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv) {
	for(int i=0 ; i<3 ; ++i) {
		struct termios a;
		int result = tcgetattr(0, &a);
		printf("Inspecting fd %d\n",i);
		if(result == 0) {
			printf("c_iflag = 0x%x\n", a.c_iflag);
			printf("- INPCK : %s\n", a.c_iflag & INPCK ? "yes" : "no");
			printf("- IGNPAR : %s\n", a.c_iflag & IGNPAR ? "yes" : "no");
			printf("- PARMRK : %s\n", a.c_iflag & PARMRK ? "yes" : "no");
			printf("- ISTRIP : %s\n", a.c_iflag & ISTRIP ? "yes" : "no");
			printf("- IGNBRK : %s\n", a.c_iflag & IGNBRK ? "yes" : "no");
			printf("- BRKINT : %s\n", a.c_iflag & BRKINT ? "yes" : "no");
			printf("- IGNCR : %s\n", a.c_iflag & IGNCR ? "yes" : "no");
			printf("- ICRNL : %s\n", a.c_iflag & ICRNL ? "yes" : "no");
			printf("- INLCR : %s\n", a.c_iflag & INLCR ? "yes" : "no");
			printf("- IXOFF : %s\n", a.c_iflag & IXOFF ? "yes" : "no");
			printf("- IXON : %s\n", a.c_iflag & IXON ? "yes" : "no");
			printf("- IXANY : %s\n", a.c_iflag & IXANY ? "yes" : "no");
			printf("- IMAXBEL : %s\n", a.c_iflag & IMAXBEL ? "yes" : "no");
			printf("c_oflag = 0x%x\n", a.c_oflag);
			printf("- OPOST : %s\n", a.c_oflag & OPOST ? "yes" : "no");
			printf("- ONLCR : %s\n", a.c_oflag & ONLCR ? "yes" : "no");
#ifdef OXTABS
			printf("- OXTABS : %s\n", a.c_oflag & OXTABS ? "yes" : "no");
#endif
#ifdef XTABS
			printf("- XTABS : %s\n", a.c_oflag & XTABS ? "yes" : "no");
#endif
#ifdef ONOEOT
			printf("- ONOEOT : %s\n", a.c_oflag & ONOEOT ? "yes" : "no");
#endif
			printf("c_cflag = 0x%x\n", a.c_cflag);
			printf("c_lflag = 0x%x\n", a.c_lflag);
			for(int c=0 ; c<NCCS ; ++c) {
				printf("Control character %d is 0x%x\n", c, a.c_cc[c]);
			}
		} else {
			printf("Error %s\n",strerror(errno));
		}
	}
	return 0;
}
