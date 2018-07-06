#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
	int i;
	int cislo;

	for (i = 0; i < 10; i++) {
		system("cls");
		cislo = rand() % 16;
		textcolor(cislo);
		cprintf("Nahodne cislo: %d", cislo);
		cprintf("Nejaky text.");
		sleep(1);
	}

	return EXIT_SUCCESS;
}