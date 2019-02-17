#include <stdio.h>
#include <stdlib.h>

#define PI (3.14159265359)

int nz() {

	for (int x = 1; x <= 4; x++) {

		printf("\n");

	}

	return 0;

}

// Hier kann der Nutzer selbst entscheiden wie viele leere Zeilen ausgegeben werden sollen BSP.: cstm_nz(variable). Die dazugehörige Variable muss natürlich einen Wert haben, ansonsten wird keine Ausgabe stattfinden

int cstm_nz(int x) {

	for (int y = 0; y <= x; y++) {

		printf("\n");

	}

	return 0;

}

int main() {


	int eingabe[6], input_sum[2], erg_sum[2];

	 
	printf("\t\tWarnung: \n");
	printf("\t\tDezimalzahlen bei der Auswahl fuehren zum Absturz des Programmes!\n");

	printf("\n1.Divisionsrest");
	printf("\nGeben Sie ein welches Programm Sie starten moechten: ");
	scanf_s("%i", &eingabe[0]);


	nz();

	switch (eingabe[0]) {

	case 1:

		printf("\t\tDivisionsrest\n");

		printf("\t\tWarnung: \n");
		printf("\t\tDieses Programm funktioniert nicht mit Dezimalzahlen!\n");

		nz();

		printf("\nGeben Sie den 1. Wert ein, den Sie addieren moechten: ");
		scanf_s("%i", &input_sum[0]);

		printf("\nGeben Sie den 2. Wert ein, den Sie addieren moechten: ");
		scanf_s("%i", &input_sum[1]);

		erg_sum[0] = input_sum[0] + input_sum[1];

		erg_sum[1] = erg_sum[0];

		if (erg_sum[1] % 2 == 0) {

			erg_sum[1] = 0;

		}

		else {

			erg_sum[1] = 1;

		}

		switch (erg_sum[1]) {

		case 0:

			printf("\nDie Summe von %i ist gerade!\n", erg_sum[0]);
			nz();

			break;

		case 1:

			printf("\nDie Summe von %i ist ungerade!\n", erg_sum[0]);
			nz();

			break;

		default:

			printf("\nDies ist keine gueltige Eingabe!\n");

		break;
		}

	break;

	case 2:



		break;

	}

	return main();

}