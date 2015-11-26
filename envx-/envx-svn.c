#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//proverka nali4iya argumente
	if (argc < 2)
	{
	  printf("Vvedite nomer processa!\n");
	  return 1;
	}
        //sozdaem bufer dlya vivoda
//        char buff[256];
	char *cmdarg2 = argv[1];
        //formiruem put k failu
        char part2[256]="/proc/";
        strcat(part2, cmdarg2);
        strcat(part2, "/environ");
	//open file env only read
	FILE *myfile;
	myfile = fopen(part2, "r");
	if ( !myfile)
	{
	  printf("The file isn't present or it is unavailable\n");
	  return 1;
	}
//	printf("%s\n", myfile);
	return 0;
}
