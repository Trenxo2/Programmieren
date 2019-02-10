#include <stdio.h>
#include <stdlib.h>

/*Hier werden Sachen Definiert*/
#define PI (3.1415926535)
#define KV (1.33333333333)

int nz() {

	for (int x = 1; x <= 4; x++) {

		printf("\n");

	}

	return 0;

}


int main() {

	int input[5];
	double eing[20], erg[12];

	

		printf("\n1.Addition\n2.Subtraktion\n3.Multiplikation\n4.Division\n5.Potenzen\n6.Volumen verschiedener Formen");

		printf("\nGeben Sie ein welches Programm Sie nutzen moechten: ");
		scanf_s("%i", &input[0]);

		nz();

		switch (input[0]) {

		case 1:

			printf("\t\t\tAddition\n");

			nz();

			printf("\nGeben Sie die 1. Wert ein den Sie mit dem 2. Wert Addieren moechten: ");
			scanf_s("%lf", &eing[0]);
			nz();

			printf("\nGeben Sie den 2. Wert ein den Sie mit dem 1. Wert Addieren moechten: ");
			scanf_s("%lf", &eing[1]);
			nz();

			erg[0] = eing[0] + eing[1];

			printf("\nDas Ergebnis von %.2lf + %.2lf lautet : %.2lf\n", eing[0], eing[1], erg[0]);
			nz();

			break;

		case 2:

			printf("\t\t\tSubtraktion\n");

			nz();

			printf("\nGeben Sie die 1. Wert ein den Sie mit dem 2. Wert Subtrahieren moechten: ");
			scanf_s("%lf", &eing[2]);
			nz();

			printf("\nGeben Sie den 2. Wert ein den Sie mit dem 1. Wert Subtrahieren moechten: ");
			scanf_s("%lf", &eing[3]);
			nz();

			erg[1] = eing[2] - eing[3];

			printf("\nDas Ergebnis von %.2lf - %.2lf lautet : %.2lf\n", eing[2], eing[3], erg[1]);
			nz();

			break;

		case 3:

			printf("\t\t\tMultiplikation\n");

			nz();

			printf("\nGeben Sie die 1. Wert ein den Sie mit dem 2. Wert Multiplizieren moechten: ");
			scanf_s("%lf", &eing[4]);
			nz();

			printf("\nGeben Sie den 2. Wert ein den Sie mit dem 1. Wert Multiplizieren moechten: ");
			scanf_s("%lf", &eing[5]);
			nz();

			erg[2] = eing[4] * eing[5];

			printf("\nDas Ergebnis von %.2lf * %.2lf lautet : %.2lf\n", eing[4], eing[5], erg[2]);
			nz();
			break;

		case 4:

			printf("\t\t\tDivision\n");

			nz();

			printf("\nGeben Sie die 1. Wert ein den Sie mit dem 2. Wert Dividieren moechten: ");
			scanf_s("%lf", &eing[6]);
			nz();

			printf("\nGeben Sie den 2. Wert ein den Sie mit dem 1. Wert Dividieren moechten: ");
			scanf_s("%lf", &eing[7]);
			nz();

			erg[3] = eing[6] / eing[7];

			printf("\nDas Ergebnis von %.2lf / %.2lf lautet : %.2lf\n", eing[6], eing[7], erg[3]);
			nz();

			break;

		case 5:

			printf("\t\t\tPotenzrechnung\n");

			nz();

			printf("\nGeben Sie die Basis ein: ");
			scanf_s("%lf", &eing[8]);

			nz();

			printf("\nGeben Sie den Exponenten ein: ");
			scanf_s("%lf", &eing[9]);

			nz();

			erg[4] = 1;

			for (int x = 1; x <= eing[9]; x++) {


				erg[4] *= eing[8];


				printf("\nDas %i. Ergebnis lautet : %.2lf", x, erg[4]);

			}

			break;

		case 6:

			printf("\t\t\tVolumenberechnung");

			nz();

			printf("\n1.Zylindervolumen\n2.Quadervolumen\n3.Dreiecksprismavolumen\n4.Kugelvolumen");

			nz();

			printf("\nTaetigen Sie nun eine Eingabe: ");
			scanf_s("%i", &input[1]);

			nz();

			switch (input[1]) {

			case 1:

				printf("\nGeben Sie die hoehe des Zylinders in CM ein: ");
				scanf_s("%lf", &eing[10]);

				printf("\nGeben Sie den Radius der Kreisflaeche im Zylinder in CM2 ein: ");
				scanf_s("%lf", &eing[11]);

				/*Errechnet die Potenz von a^a*/

				erg[5] = eing[11] * eing[11];

				/*Errechnet die Formel PI * a² * höhe */

				erg[6] = PI * erg[5] * eing[10];

				/*Gibt das Ergebnis aus*/

				printf("\nIhr Volumen lautet : %lf cm3", erg[6]);

				nz();

				break;

			case 2:

				printf("\nGeben sie die Laenge des Quaders in CM ein: ");
				scanf_s("%lf", &eing[12]);

				printf("\nGeben Sie die Breite des Quaders in CM ein: ");
				scanf_s("%lf", &eing[13]);

				printf("\nGeben Sie die Hoehe des Quarders in CM ein: ");
				scanf_s("%lf", &eing[14]);

				/*Berechnet die Formel a*b*c */

				erg[7] = eing[12] * eing[13] * eing[14];

				/*Gibt das Ergebnis aus*/

				printf("\nDas Volumen des Quaders lautet : %lf cm3", erg[7]);

				nz();

				break;

			case 3:

				printf("\nGeben sie die Grundflaeche des Prismas in CM an:  ");
				scanf_s("%lf", &eing[15]);

				printf("\nGeben Sie die Hoehe des Prismas in CM an: ");
				scanf_s("%lf", &eing[16]);

				/*Hier wird das Volumen eines Dreicksprismas mit der Formel G*h berechnet */

				erg[8] = eing[15] * eing[16];

				printf("\nDas Volumen des Prismas lautet: %lf cm3", erg[8]);

				nz();

				break;

			case 4:

				printf("\nGeben Sie den Radius der Kreisflaeche an: ");
				scanf_s("%lf", &eing[17]);

				/*Berechnet r³*/
				erg[9] = eing[17] * eing[17] * eing[17];

				/*Berechnet 4/3 * PI * r³ */
				erg[10] = KV * PI;
				erg[11] = erg[10] * erg[9];

				printf("\nDas Volumen der Kugel lauet: %lf cm3", erg[11]);

				break;
			}

			break;

		default:

			printf("\nUngueltige Eingabe!\n");

			break;

		}

		return main();

}
