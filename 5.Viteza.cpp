#include"stdafx.h"
#include"5.Viteza.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void viteza(double vit) {
	
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.m/s; 2.km/h; 3.mph;\n";
	cin >> m;
	cout << "\n" << vit << " ";
	switch (m) {
	case 1:
		cout << "m/s\n";
		break;
	case 2:
		cout << "km/h\n";
		break;
	case 3:
		cout << "mph\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.m/s; 2.km/h; 3.mph;\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		vit = vit;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			vit = vit*3.6;
			break;
		case 3:
			vit = vit*2.236936;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			vit = vit / 3.6;
			break;
		case 3:
			vit = vit / 1.609344;
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			vit = vit*0.44704;
			break;
		case 2:
			vit = vit*1.609344;
			break;
		}
	}
	printf_s("\n%g", vit);
	switch (n) {
	case 1:
		cout << " m/s\n";
		break;
	case 2:
		cout << " km/h\n";
		break;
	case 3:
		cout << " mph\n";
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