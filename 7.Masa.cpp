#include"stdafx.h"
#include"7.Masa.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void masa(double mass) {

	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.mg; 2.cg; 3.dg;\n";
	cout << "4.g; 5.dag; 6.hg;\n";
	cout << "7.kg; 8.dakg; 9.q; 10.t;\n";
	cin >> m;
	cout << "\n" << mass << " ";
	switch (m) {
	case 1:
		cout << "mg\n";
		break;
	case 2:
		cout << "cg\n";
		break;
	case 3:
		cout << "dg\n";
		break;
	case 4:
		cout << "g\n";
		break;
	case 5:
		cout << "dag\n";
		break;
	case 6:
		cout << "hg\n";
		break;
	case 7:
		cout << "kg\n";
		break;
	case 8:
		cout << "dakg\n";
		break;
	case 9:
		cout << "q\n";
		break;
	case 10:
		cout << "t\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.mg; 2.cg; 3.dg;\n";
	cout << "4.g; 5.dag; 6.hg;\n";
	cout << "7.kg; 8.dakg; 9.q; 10.t;\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case -9:
		mass = mass / 1000000000;
		break;
	case -8:
		mass = mass / 100000000;
		break;
	case -7:
		mass = mass / 10000000;
		break;
	case -6:
		mass = mass / 1000000;
		break;
	case -5:
		mass = mass / 100000;
		break;
	case -4:
		mass = mass / 10000;
		break;
	case -3:
		mass = mass / 1000;
		break;
	case -2:
		mass = mass / 100;
		break;
	case -1:
		mass = mass / 10;
		break;
	case 0:
		mass = mass;
		break;
	case 1:
		mass = mass * 10;
		break;
	case 2:
		mass = mass * 100;
		break;
	case 3:
		mass = mass * 1000;
		break;
	case 4:
		mass = mass * 10000;
		break;
	case 5:
		mass = mass * 100000;
		break;
	case 6:
		mass = mass * 1000000;
		break;
	case 7:
		mass = mass * 10000000;
		break;
	case 8:
		mass = mass * 100000000;
		break;
	case 9:
		mass = mass * 1000000000;
		break;
	}

	printf_s("\n%g", mass);
	switch (n) {
	case 1:
		cout << " mg\n";
		break;
	case 2:
		cout << " cg\n";
		break;
	case 3:
		cout << " dg\n";
		break;
	case 4:
		cout << " g\n";
		break;
	case 5:
		cout << " dag\n";
		break;
	case 6:
		cout << " hg\n";
		break;
	case 7:
		cout << " kg\n";
		break;
	case 8:
		cout << " dakg\n";
		break;
	case 9:
		cout << " q\n";
		break;
	case 10:
		cout << " t\n";
		break;
	}

	cout << "\nDoriti sa faceti alta conversie: Da(Y)/Nu(N)?\n";
	cin >> decizie;
	switch (decizie) {
	case 'Y': {
		system("cls");
		break; }
	case 'N': {
		goto _label1;
		break; }
	}
	system("cls");
	return;
_label1:
	exit(EXIT_SUCCESS);
}