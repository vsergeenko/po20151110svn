// programma Logname
// Search: man 3, google

// podklu4aem biblioteki
#include <stdio.h>
#include <stdlib.h>

// glabnaya funkciya
int main(int argc, char const *argv[])
{
	//polu4aem imya polvozatelya
	char *username=getenv("USER");
	//proveryaem na NULL
	if (username == NULL)
		{
		//vivod oshibka, vozvrat 1
		printf("Sorry, ERROR\n");
		return 1;
		}
	//ina4e vivod imeni polzovatelya
	printf("%s\n",username);
	//vozvrat 0, 4to vse uspeshno
	return 0;
}

