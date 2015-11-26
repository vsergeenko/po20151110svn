#include <stdio.h>
#include <string.h>
#include <unistd.h>

//function
int mypwdx()
{
	return 0;
}

int main(int argc, char *argv[])
{
	//proverka nali4iya argumente
	if (argc < 2)
	{
	  printf("Vvedite nomer processa!\n");
	  return 1;
	}
	//sozdaem bufer dlya vivoda
	char buff[256];
	//formiruem stroku processa
	char part1[256]="/proc/";
	strcat(part1, argv[1]);
	strcat(part1, "/cwd");
	//delaem sys vizov (man 2 readlink)
	int len;
	len = readlink(part1, buff, sizeof(buff));
	//proverka dlini
	if (len < 0)
	{
	  printf("No exist process: %s\n", argv[1]);
	  return 1;
	}
	printf("PID: %s\nPath: %s\n", argv[1], buff);
	return 0;
}
