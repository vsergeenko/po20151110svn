#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

//function
int mypwdx()
{
	return 0;
}

int main(int argc, char *argv[])
{
	//sozdaem bufer dlya vivoda
//	char buff[256];
	//formiruem stroku processa
	char part1[256]="/proc/";
	strcat(part1, argv[1]);
	strcat(part1, "/cwd");
	printf("%s\n", part1);
	return 0;
}
