#include <stdio.h>


int neue_zeile() {

	int neue_z = 4;

	for (int x = 1; x <= neue_z; x++) {

		printf("\n");

	}
	return 0;
}


int main() {

	int x, y, berechnung, berechnung2;
	char zeichen;

	printf("\nGeben Sie den 1. Wert ein: ");
	scanf_s("%i", &x);
	neue_zeile();

	printf("\nGeben Sie den 2. Wert ein: ");
	scanf_s("%i", &y);
	neue_zeile();

	berechnung = x + y;

	/*Wird genutzt um den Wert der Variable Berechnung auf der Variable Berechnung2 zu speichern*/

	berechnung2 = berechnung;

	if (berechnung % 2 == 0) {

		berechnung = 0;

	}
	else if (berechnung % 2 == 1){

		berechnung = 1;

	}


	switch (berechnung) {

	case 0:

		printf("\nDie Summe von %i ist gerade!\n", berechnung2);
		neue_zeile();

		break;

	case 1:

		printf("\nDie Summe von %i ist ungerade!\n", berechnung2);
		neue_zeile();

		break;
	}

	return main();

}