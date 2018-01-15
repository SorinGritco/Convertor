#include "stdafx.h"
#include "10.Densitate.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void densitate(double dens) {

	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.kg/m^3; 2.g/cm^3;\n";
	cout << "3.lbm/ft^3 (livra/picior-cub); 4.slg/ft^3 (slug/picior-cub)\n";
	cin >> m;
	cout << "\n" << dens << " ";
	switch (m) {
	case 1:
		cout << "kg/m^3\n";
		break;
	case 2:
		cout << "g/cm^3\n";
		break;
	case 3:
		cout << "lbm/ft^3\n";
		break;
	case 4:
		cout << "slg/ft^3\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.kg/m^3; 2.g/cm^3;\n";
	cout << "3.lbm/ft^3 (livra/picior-cub); 4.slg/ft^3 (slug/picior-cub)\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		dens = dens;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			dens = dens / 1000;
			break;
		case 3:
			dens = dens / 16.018463;
			break;
		case 4:
			dens = dens / 515.379;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			dens = dens * 1000;
			break;
		case 3:
			dens = (dens * 1000) / 16.018463;
			break;
		case 4:
			dens = (dens * 1000) / 515.379;
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			dens = dens*16.018463;
			break;
		case 2:
			dens = (dens*16.018463) / 1000;
			break;
		case 4:
			dens = (dens*16.018463) / 515.379;
			break;
		}
		break;
	case 4:
		switch (n) {
		case 1:
			dens = dens * 515.379;
			break;
		case 2:
			dens = (dens* 515.379) / 1000;
			break;
		case 3:
			dens = (dens * 515.379) / 16.018463;
			break;
		}
		break;
	}

	printf_s("\n%g", dens);
	switch (n) {
	case 1:
		cout << " kg/m^3\n";
		break;
	case 2:
		cout << " g/cm^3\n";
		break;
	case 3:
		cout << " lbm/ft^3\n";
		break;
	case 4:
		cout << " slg/ft^3\n";
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