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
	//4itaem argument
	char *cmdarg2 = argv[1];
        //formiruem put` k failu
        char part2[256]="/proc/";
        strcat(part2, cmdarg2);
        strcat(part2, "/environ");
	//open file env only read
	FILE *myfile;
	myfile = fopen(part2, "r");
	if ( !myfile )
	{
	  printf("The file isn't present or it is unavailable\n");
	  return 1;
	}
	char c;
	do
	{
	  c = fgetc(myfile);
	  //esli nado, to menyaem konec stroki na perenos stroki
	  if ( c == '\0' )
	  {
	    c = '\n';
	  }
	  printf("%c", c);
	}
	while ( c != EOF );
	//zakrivaem file
	fclose(myfile);
	return 0;
}
