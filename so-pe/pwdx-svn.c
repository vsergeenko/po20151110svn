#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libpe-svn.h"

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
	char *cmdarg = argv[1];
	//vizov function
	int rez;
	rez = mypwdx(cmdarg, buff, sizeof(buff));
	//obrabotka oshibki
	if ( rez != 0 )
	{
	  return 1;
	}
	printf("PID: %s\nPath: %s\n", cmdarg, buff);
	return 0;
}
