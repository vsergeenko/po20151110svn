// programma Logname
// Search: man 3, google

// podklu4aem biblioteki
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdlib.h>
#include <unistd.h>

// glabnaya funkciya
int main(int argc, char const *argv[])
{
	//polu4aem strukturu /etc/passwd
	//getuid() - 4islovoi ID polzovatelya
	struct passwd *p = getpwuid(getuid());
	//proveryaem na NULL
	if (p == NULL)
		{
		//vivod oshibka, vozvrat 1
		printf("Sorry, ERROR\n");
		return 1;
		}
	//ina4e vivod imeni polzovatelya
	printf("Username: %s", p->pw_name);
	//vozvrat 0, 4to vse uspeshno
	return 0;
}

