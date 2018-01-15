#include"stdafx.h"
#include"3.Volum.h"
#include<conio.h>
#include<iostream>
using namespace std;

void volum(double vol) {
	
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.mm^3; 2.cm^3; 3.dm^3;\n";
	cout << "4.m^3;  5.dam^3; 6.hm^3;\n";
	cout << "7.km^3;\n";
	cin >> m;
	cout << "\n" << vol << " ";

	switch (m) {
	case 1:
		cout << "mm^3\n";
		break;
	case 2:
		cout << "cm^3\n";
		break;
	case 3:
		cout << "dm^3\n";
		break;
	case 4:
		cout << "m^3\n";
		break;
	case 5:
		cout << "dam^3\n";
		break;
	case 6:
		cout << "hm^3\n";
		break;
	case 7:
		cout << "km^3\n";
		break;
	}

	cout << "\n";
	cout << "In:\n";
	cout << "1.mm^3; 2.cm^3; 3.dm^3;\n";
	cout << "4.m^3;  5.dam^3; 6.hm^3;\n";
	cout << "7.km^3;\n";
	cin >> n;
	dif = m - n;

	switch (dif) {
	case -6:
		vol = vol / 10000000000000000;
		break;
	case -5:
		vol = vol / 1000000000000000;
		break;
	case -4:
		vol = vol / 1000000000000;
		break;
	case -3:
		vol = vol / 1000000000;
		break;
	case -2:
		vol = vol / 10000000;
		break;
	case -1:
		vol = vol / 1000;
		break;
	case 0:
		vol = vol;
		break;
	case 1:
		vol = vol * 1000;
		break;
	case 2:
		vol = vol * 1000000;
		break;
	case 3:
		vol = vol * 1000000000;
		break;
	case 4:
		vol = vol * 1000000000000;
		break;
	case 5:
		vol = vol * 1000000000000000;
		break;
	case 6:
		vol = vol * 1000000000000000000;
		break;
	}

	printf_s("\n%g", vol);
	switch (n) {
	case 1:
		cout << " mm^3\n";
		break;
	case 2:
		cout << " cm^3\n";
		break;
	case 3:
		cout << " dm^3\n";
		break;
	case 4:
		cout << " m^3\n";
		break;
	case 5:
		cout << " dam^3\n";
		break;
	case 6:
		cout << " hm^3\n";
		break;
	case 7:
		cout << " km^3\n";
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
