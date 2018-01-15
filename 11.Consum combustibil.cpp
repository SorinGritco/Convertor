#include "stdafx.h"
#include "11.Consum combustibil.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void consum(double cons) {
	int m, n, dif;
	char decizie;
	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.l/100km; 2.mila/galon; 3.km/l;\n";
	cin >> m;
	cout << "\n" << cons << " ";
	switch (m) {
	case 1:
		cout << "l/100km\n";
		break;
	case 2:
		cout << "mila/galon\n";
		break;
	case 3:
		cout << "km/l\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.l/100km; 2.mila/galon; 3.km/l;\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		cons = cons;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			cons = (100 / cons) / (1.609 / 3.78);
			break;
		case 3:
			cons = 100 / cons;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			cons = 100 / (cons*(1.609 / 3.78));
			break;
		case 3:
			cons = cons*(1.609 / 3.78);
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			cons = 100 / cons;
			break;
		case 2:
			cons = cons*(1.609 / 3.78);
			break;
		}
	}
	printf_s("\n%g", cons);
	switch (n) {
	case 1:
		cout << " l/100km\n";
		break;
	case 2:
		cout << " mila/galon\n";
		break;
	case 3:
		cout << " km/l\n";
		break;
	}

	cout << "\nDoriti sa faceti alta conversie: Da(Y)/Nu(N)?\n";
	cin >> decizie;
	switch (decizie) {
	case 'Y': {
		system("cls");
		break; }
	case 'N':
		goto _label1;
		break;
	}
	system("cls");
	return;
_label1:
	exit(EXIT_SUCCESS);
}