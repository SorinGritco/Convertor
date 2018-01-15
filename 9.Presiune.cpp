#include "stdafx.h"
#include "9.Presiune.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void presiune(double pres) {
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.Pa; 2.bar; 3.psi; 4.Atm\n";
	cin >> m;
	cout << "\n" << pres << " ";
	switch (m) {
	case 1:
		cout << "Pa\n";
		break;
	case 2:
		cout << "bar\n";
		break;
	case 3:
		cout << "psi\n";
		break;
	case 4:
		cout << "Atm\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.Pa; 2.bar; 3.psi; 4.Atm\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		pres = pres;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			pres = pres / 100000;
			break;
		case 3:
			pres = pres / 6894.7572;
			break;
		case 4:
			pres = pres / 101325;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			pres = pres * 100000;
			break;
		case 3:
			pres = (pres * 100000) / 6894.7572;
			break;
		case 4:
			pres = (pres * 100000) / 101325;
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			pres = pres*6894.7572;
			break;
		case 2:
			pres = (pres*6894.7572) / 100000;
			break;
		case 4:
			pres = (pres * 6894.7572) / 101325;
			break;
		}
		break;
	case 4:
		switch (n) {
		case 1:
			pres = pres * 101325;
			break;
		case 2:
			pres = (pres * 101325) / 100000;
			break;
		case 3:
			pres = (pres * 101325) / 6894.7572;
			break;
		}
		break;
	}

	printf_s("\n%g", pres);
	switch (n) {
	case 1:
		cout << " Pa\n";
		break;
	case 2:
		cout << " bar\n";
		break;
	case 3:
		cout << " psi\n";
		break;
	case 4:
		cout << " Atm\n";
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