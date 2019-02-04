/*Einfache wiederholung/anlegung einer Bibliothek für (else-)if-schleifen*/

#include<stdio.h>

int neue_zeile(){

	int x, neue_z=100;

	for (x = 1; x <= neue_z; x++) {


		printf("\n");


	}
	
	return 0;

}

int neue_zeilen() {

	int x, neue_z = 4;

	for (x = 1; x <= neue_z; x++) {
		
		printf("\n");

	}

	return 0;

}



int main() {
	
	int a, b, c, eingabe;

	printf("\nZahlenvergleich \n\n");


	/*Zahleneingabe*/
	printf("\nGeben Sie den 1. Wert ein: ");
	scanf_s("%i", &a);

	printf("\nGeben Sie den 2. Wert ein: ");
	scanf_s("%i", &b);

	printf("\nGeben Sie den 3. Wert ein: ");
	scanf_s("%i", &c);

	/*Falls Zahlen kleiner als 0 sein sollten*/
	if (a < 0 || b < 0 || c < 0) {

		printf("\nAlle Zahlen unter Null ergeben keine gueltige Eingabe!\n");

		neue_zeile();

		return main();

	}

	/*1. Zahlenvergleich*/
	if (a > b) {

		neue_zeilen();
		printf("\t\t 1. Zahlenvergleich!\n\n");
		printf("\nDer 1. Wert %i ist groesser als der 2. Wert %i\n\n", a, b);

	}
	else if (a < b) {

		neue_zeilen();
		printf("\t\t 1. Zahlenvergleich!\n\n");
		printf("\nDer 2. Wert %i ist groesser als der 1. Wert %i\n\n", b,a);

	}

	/*2.Zahlenvergleich*/
	if (a > c) {

		neue_zeilen();
		printf("\t\t 2. Zahlenvergleich!\n\n");
		printf("\nDer 1. Wert %i ist groesser als der 3. Wert %i\n\n", a, c);

	}
	else if (a < c) {

		neue_zeilen();
		printf("\t\t 2. Zahlenvergleich!\n\n");
		printf("\nDer 3. Wert %i ist groesser als der 1. Wert %i\n\n", c, a);

	}

	/*3.Zahlenvergleich*/
	if (c > b) {

		neue_zeilen();
		printf("\t\t 3. Zahlenvergleich!\n\n");
		printf("\nDer 3. Wert %i ist groesser als der 2. Wert %i\n\n", c, b);

	}

	else if (c < b) {

		neue_zeilen();
		printf("\t\t 3. Zahlenvergleich!\n\n");
		printf("\nDer 2. Wert %i ist groesser als der 3. Wert %i\n\n", b, c);

	}

	/*Falls Zahlen gleich gross sind*/

	if (a == b && a == c || b == a && b == c || c == a && c == b) {

		neue_zeilen();
		printf("\nAlle Drei Werte sind gleich gross!\n\n");

	}

	/*
	if (a == b && b == a) {

		neue_zeilen();
		printf("\nDie beiden Werte (A)%i und (B)%i sind gleich gross!", a, b);
		neue_zeilen();

	}
	else if (b == c && c == b) {

		neue_zeilen();
		printf("\nDie beiden Werte (B)%i und (C)%i sind gleich gross!", c, b);
		neue_zeilen();
	}

	if (c == a && a == c) {
		
		neue_zeilen();
		printf("\nDie beiden Werte (C)%i und (A)%i sind gleich gross!", a, c);
		neue_zeilen();
		
	}
	*/

	printf("\nGeben Sie etwas ein um das Programm zu beenden: ");
	scanf_s("%i", &eingabe);

	return 0;

}