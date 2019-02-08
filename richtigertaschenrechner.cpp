#include <stdio.h>
#include <stdlib.h>

#define PI (3.14159265359)

int nz() {

	for (int x = 1; x <= 4; x++) {

		printf("\n");

	}

	return 0;

}

int main() {

	int input[6];
	double erg[5], eing[3];

	printf("\n1.Zylindervolumen\n2.Kugelvolumen");
	printf("\nGeben Sie ein welches Volumen Sie berrechnet haben moechten: ");
	scanf_s("%i", &input[0]);

	nz();

	switch (input[0]) {

	case 1:

		nz();

		printf("\nGeben Sie die Hoehe des Zylinders(in CM/ohne die Einheit) ein: ");
		scanf_s("%lf", &eing[0]);

		nz();

		printf("\nGeben Sie die Flaeche des Kreises(in CM2/ohne die Einheit) an: ");
		scanf_s("%lf", &eing[1]);

		nz();

		erg[0] = eing[1] * eing[1];

		erg[1] = PI * erg[0] * eing[0];

		printf("\nDas Volumen des Zylinders lautet: %.2lf cm3", erg[1]);

		break;

	case 2:

		nz();

		printf("\nGeben Sie den Radius den Kreisflaeche der Kugel ein: ");
		scanf_s("%lf", eing[2]);

		erg[2] = eing[2] * eing[2] * eing[2];

		erg[4] = 4 / 3 * PI * erg[2];

		printf("\nDas Volumen der Kugel lautet: %.2lf cm3", erg[4]);

		break;

	default:

		nz();

		printf("\nDies ist keine gueltige Eingabe!\n");

		nz();

		break;

	}

	return main();

}