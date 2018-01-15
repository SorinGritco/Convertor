#include "stdafx.h"
#include"8.Energie.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void energie(double energ) {
	int m, n, dif;
	char decizie;
	
	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.J; 2.kcal; 3.KWh; 4.erg\n";
	cin >> m;
	cout << "\n" << energ << " ";
	switch (m) {
	case 1:
		cout << "J\n";
		break;
	case 2:
		cout << "kcal\n";
		break;
	case 3:
		cout << "kWh\n";
		break;
	case 4:
		cout << "erg\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.J; 2.kcal; 3.KWh; 4.erg\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		energ = energ;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			energ = energ / 4186.8;
			break;
		case 3:
			energ = energ / 3600000;
			break;
		case 4:
			energ = energ * 10000000;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			energ = energ*4186.8;
			break;
		case 3:
			energ = (energ*4186.8) / 3600000;
			break;
		case 4:
			energ = (energ*4186.8) * 10000000;
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			energ = energ * 3600000;
			break;
		case 2:
			energ = (energ * 3600000) / 4186.8;
			break;
		case 4:
			energ = (energ * 3600000) * 10000000;
			break;
		}
		break;
	case 4:
		switch (n) {
		case 1:
			energ = energ / 10000000;
			break;
		case 2:
			energ = (energ / 10000000) / 4186.8;
			break;
		case 3:
			energ = (energ / 10000000) / 3600000;
			break;
		}
		break;
	}

	printf_s("\n%g", energ);
	switch (n) {
	case 1:
		cout << " J\n";
		break;
	case 2:
		cout << " kcal\n";
		break;
	case 3:
		cout << " kWh\n";
		break;
	case 4:
		cout << " erg\n";
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