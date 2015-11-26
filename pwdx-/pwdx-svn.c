#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int pathproc;
	//4itaem 1 argument v stroke
	char *cmdarg = argv[1];
	//sozdaem bufer
	char buf[256];
	//sozdaem stroku processa
	char pathlen[256] = srtcat(srtcat("/proc/",argv[1]),"/cwd");
	//delaem sys vizov
	pathproc = readlink(pathlen, buf, sizeof(buf));
	printf("%s\n", buf);
	return 0;
}
