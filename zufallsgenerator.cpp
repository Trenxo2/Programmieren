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

	int zahl1 = rand();
	int zahl2 = rand();
	int zahl_erg, modolu;

	printf("\nGeben Sie ein in welchem Bereich Zufallszahlen angezeigt werden sollen!\n");
	printf("\nMinimale Zahl: ");
	scanf_s("%i", &zahl1);

	printf("\nMaximale Zahl: ");
	scanf_s("%i", &zahl2);

	printf("\nGeben Sie einen Modolu Wert ein: ");
	scanf_s("%i", &modolu);

	zahl_erg = zahl1 + zahl2;
	

	for (int i = 1; i <= 10; i++) {

		
		zahl_erg = rand() % modolu;

		printf("\n%i. Zahl: %d", i, zahl_erg);

		

	}


	return main();

}