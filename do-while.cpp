#include <stdio.h>

int neue_zeile() {

	int neue_zeile=4;

	for (int x = 1; x <= neue_zeile; x++) {

		printf("\n");

	}

	return 0;

}



int main() {

	int x,y=1;
	double eingabe, summe=0.0;

	printf("\nGeben Sie ein Wie oft Sie eine Zahl eingeben moechten ");
	scanf_s("%i", &x);

	do {

		neue_zeile();

		printf("\nGeben Sie die %i. Eingabe ein: ", y);

		scanf_s("%lf", &eingabe);

		summe = summe + eingabe;

		y = y++;

	} while (y <= x);

	neue_zeile();

	printf("\nDie Summe aller Zahlen lautet : %.2lf", summe);

	neue_zeile();

	return main();

}