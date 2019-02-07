#include <stdio.h>
#include <stdlib.h>

int nz() {

	int nz = 4;

	for (int x = 1; x <= nz; x++); {

		printf("\n");

	}

	return 0;

}


int main() {

	int input_int[10], eingabe;

	double input[5], ergebnis=0;
	double ptz_erg=1;

	nz();
	printf("\n1.Addition\n2.Potenzrechnung\n3.Jahreszeiten-erkenner");
	printf("\nWelches Programm moechten sie waehlen: ");

	scanf_s("%i", &input_int[0]);

	if (input_int[0] > 3) {

		printf("\nDies ist keine gueltige eingabe!\n");

		return main();

	}

	switch (input_int[0]) {

	case 1:

		nz();
		printf("\nKleine Addition Schleife\n");
		nz();

		printf("\nGeben Sie ein wie oft die jetzige Schleife ausgefuehrt werden soll: ");
		scanf_s("%i", &input_int[1]);

		printf("\nDie jetzigen Zahlen werden Addiert und ausgegeben!\n");
		nz();

		for (int x = 1; x <= input_int[1]; x++) {

			printf("\nGeben Sie die %i. Zahl ein: ", x);
			scanf_s("%lf", &input[0]);

			ergebnis = input[0] + ergebnis;

		}

		printf("\nIhre Summe lautet : %.2lf", ergebnis);
		nz();

		break;

	case 2:

		nz();

		printf("\nPotenzrechnung\n");

		nz();

		printf("\nGeben Sie die Basis ein: ");
		scanf_s("%lf", &input[1]);

		nz();

		printf("\nGeben Sie den Exponent ein: ");
		scanf_s("%lf", &input[2]);

		nz();

		for (int x = 1; x <= input[2]; x++) {
			
			ptz_erg *= input[1];

			printf("\n%i. Ergebnis lautet %.2lf", x, ptz_erg);

		}

		break;

	case 3:

		nz();
		
		printf("\nGeben Sie als Zahl ein in welchem Monat Sie sich befinden: ");
		scanf_s("%i", &input_int[2]);
		nz();

		/*Switch-Case Anweisung innerhalb eines cases*/

		switch (input_int[2]) {

		case 1: case 2:
		case 12:

			nz();

			printf("\nSie befinden sich im Winter!\n");
			
			nz();

		break;

		case 3: case 4:
		case 5:

			nz();

			printf("\nSie befinden sich im Fruehling!\n");

			nz();

			break;

		case 6: case 7:
		case 8:

			nz();

			printf("\nSie befinden sich im Sommer!\n");

			nz();

			break;

		case 9: case 10:
		case 11:

			nz();

			printf("\nSie befiden sich im Herbst!\n");

			nz();

			break;

		default:
			
			nz();

			printf("\nDies ist keine gueltige Eingabe!\n");
			
			nz();

			return main();

			break;
		}
		break;


	}

	return main();

}
	