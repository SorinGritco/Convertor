#include"stdafx.h"
#include"6.Temperatura.h"
#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

void temperatura(double temp) {

	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.Celsius; 2.Fahrenheit; 3.Kelvin;\n";
	cin >> m;
	cout << "\n" << temp << " ";
	switch (m) {
	case 1:
		cout << "C\n";
		break;
	case 2:
		cout << "F\n";
		break;
	case 3:
		cout << "K\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.Celsius; 2.Fahrenheit; 3.Kelvin;\n";
	cin >> n;
	dif = m - n;
	switch (dif) {
	case 0:
		temp = temp;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			temp = (temp*(9 / 5)) + 32;
			break;
		case 3:
			temp = temp + 273.15;
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			temp = (temp - 32)*(5 / 9);
			break;
		case 3:
			temp = ((temp - 32)*(5 / 9)) + 273.15;
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			temp = temp - 273.15;
			break;
		case 2:
			temp = ((temp - 273.15)*(9 / 5)) + 32;
			break;
		}
		break;
	}

	printf_s("\n%g", temp);
	switch (n) {
	case 1:
		cout << " C\n";
		break;
	case 2:
		cout << " F\n";
		break;
	case 3:
		cout << " K\n";
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