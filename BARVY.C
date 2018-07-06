#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	int cislo;

	for (i = 0; i < 30; i++) {
		system("cls");
		cislo = rand() % 16;
		textcolor(cislo);
		cprintf("Nahodne cislo: %d", cislo);
		delay(500);
	}

	return EXIT_SUCCESS;
}