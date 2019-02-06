#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int nz() {

	int nz = 4;

	for (int x = 1; x <= nz; x++) {

		printf("\n");

	}

	return 0;

}




int main() {

	srand(time(NULL));

	int zahl1;
	int zahl2;
	int zahl_erg;

	printf("\nGeben Sie ein in welchem Bereich Zufallszahlen angezeigt werden sollen!\n");
	printf("\nMinimale Zahl: ");
	scanf_s("%i", &zahl1);

	printf("\nMaximale Zahl: ");
	scanf_s("%i", &zahl2);

	zahl_erg = zahl1 + zahl2;
	

	for (int i = 1; i <= 10; i++) {

		if (zahl_erg < zahl1) {

			nz();

			printf("\nDie Zufaellige Zahl war kleiner als deine Eingabe!\n");

			nz();

			return main();

		}
		else if (zahl_erg > zahl2) {
#
			nz();

			printf("\nDie Zufaellige Zahl war groesser als deine Eingabe!\n");

			nz();

			return main();

		}

		zahl_erg = rand() % zahl2;
		printf("\n%i. Zahl: %d", i, zahl_erg);

		

	}


	return main();

}