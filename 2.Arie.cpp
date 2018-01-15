#include"stdafx.h"
#include"2.Arie.h"
#include<iostream>
#include<conio.h>
using namespace std;

void arie(double ar) {
	
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.mm^2; 2.cm^2; 3.dm^2;\n";
	cout << "4.m^2;  5.dam^2(ari); 6.hm^2(ha);\n";
	cout << "7.km^2;\n";
	cin >> m;
	cout << "\n" << ar << " ";
	switch (m) {
	case 1:
		cout << "mm^2\n";
		break;
	case 2:
		cout << "cm^2\n";
		break;
	case 3:
		cout << "dm^2\n";
		break;
	case 4:
		cout << "m^2\n";
		break;
	case 5:
		cout << "dam^2(ari)\n";
		break;
	case 6:
		cout << "hm^2(ha)\n";
		break;
	case 7:
		cout << "km^2\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.mm^2; 2.cm^2; 3.dm^2;\n";
	cout << "4.m^2;  5.dam^2(ar); 6.hm^2(ha);\n";
	cout << "7.km^2;\n";
	cin >> n;
	dif = m - n;

	switch (dif) {
	case -6:
		ar = ar / 1000000000000;
		break;
	case -5:
		ar = ar / 10000000000;
		break;
	case -4:
		ar = ar / 100000000;
		break;
	case -3:
		ar = ar / 1000000;
		break;
	case -2:
		ar = ar / 100000;
		break;
	case -1:
		ar = ar / 100;
		break;
	case 0:
		ar = ar;
		break;
	case 1:
		ar = ar * 100;
		break;
	case 2:
		ar = ar * 10000;
		break;
	case 3:
		ar = ar * 1000000;
		break;
	case 4:
		ar = ar * 100000000;
		break;
	case 5:
		ar = ar * 10000000000;
		break;
	case 6:
		ar = ar * 1000000000000;
		break;
	}


	printf_s("\n%g", ar);
	switch (n) {
	case 1:
		cout << " mm^2\n";
		break;
	case 2:
		cout << " cm^2\n";
		break;
	case 3:
		cout << " dm^2\n";
		break;
	case 4:
		cout << " m^2\n";
		break;
	case 5:
		cout << " dam^2(ari)\n";
		break;
	case 6:
		cout << " hm^2(ha)\n";
		break;
	case 7:
		cout << " km^2\n";
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