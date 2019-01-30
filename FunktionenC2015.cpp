#include <stdio.h>

/*Funktion Potenzen*/
double ptz(double a) {

	double b = a * a;

	return b;
}

/*Funktion Addition*/

double add(double a, double b) {

	int c = a + b;

	return c;

}

/*Funktion Multiplikation*/

double mlti(double a, double b) {

	int c = a * b;

	return c;

}



/*Main*/


int main() {

	double ptz_eing, add_eing1, add_eing2;
	double mlti_eing1, mlti_eing2;
	char zeichen;

	printf("\n1.Potenzen \n2.Addition \n3.Multiplikation");
	printf("\nGeben Sie ein was Sie berechnen moechten: ");

	zeichen = getchar();

	switch (zeichen) {

	case '1':

		printf("\nGeben Sie eine Zahl ein, die Sie Potenzieren moechten: ");
		scanf_s("%lf", &ptz_eing);

		printf("\nIhr ergebnis lautet %.2lf\n", ptz(ptz_eing) );

		break;


		
	case '2':

		printf("\nGeben Sie die 1. Zahl ein die Sie in der Addition verwenden moechten: ");
		scanf_s("%lf", &add_eing1);

		printf("\nGeben Sie die 2. Zahl ein die Sie in der Addition verwenden moechten: ");
		scanf_s("%lf", &add_eing2);

		printf("\nIhr ergebnis lautet aufgrund dieser Formel %.2lf + %.2lf = %.2lf\n", add_eing1, add_eing2, add(add_eing1, add_eing2) );


		break;

	case '3':

		printf("\nGeben Sie die 1. Zahl ein die Sie in der Multiplikation verwenden moechten: ");
		scanf_s("%lf", &mlti_eing1);

		printf("\nGeben Sie die 2. Zahl ein die Sie in der Multiplikation verwenden moechten: ");
		scanf_s("%lf", &mlti_eing2);

		printf("\nIhr ergebnis lautet Aufgrund dieser Formel %.2lf * %.2lf, %.2lf\n", mlti_eing1, mlti_eing2, mlti(mlti_eing1, mlti_eing2));

		break;


	}

	return 0;

}