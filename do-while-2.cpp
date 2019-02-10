#include <stdio.h>
#include <stdlib.h>

int nz() {

	for (int x = 1; x <= 4; x++) {

		printf("\n");

	}

	return 0;

}

int main() {

	int input[3];

	double inp[2], erg[1];

	do {

		printf("\nGeben Sie einen Wert ein: ");
		scanf_s("%i", &input[1]);

		nz();

		printf("\nDen Wert den Sie eingeben haben lautete: %i\n", input[1]);

		nz();

		printf("\nGeben Sie ein wie oft Sie die naechste Schleife ausfuehren moechten: ");
		scanf_s("%i", &input[2]);

		nz();

		for (int x = 1; x <= input[2]; x++) {

			printf("\nGeben Sie den %i. Wert ein: ",x);
			scanf_s("%lf", &inp[0]);

			erg[0] += inp[0];

		}

		printf("\nDie Summe aller Zahlen lauten: %.2lf\n", erg[0]);

		nz();

		printf("\n1.Ja\n0.Nein");
		printf("\nTaetigen Sie einen der oben genannten Eingaben um das Programm zu beenden: ");
		scanf_s("%i", &input[0]);

		nz();

	} while (input[0] < 1);

	return 0;

}