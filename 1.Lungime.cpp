#include"stdafx.h"
#include"1.Lungime.h"
#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

void lungime(float lung) {
	
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.mm; 2.cm; 3.dm;\n";
	cout << "4.m;  5.dam; 6.hm;\n";
	cout << "7.km;\n";
	cin >> m;
	cout << "\n" << lung << " ";
	switch (m) {
	case 1:
		cout << "mm\n";
		break;
	case 2:
		cout << "cm\n";
		break;
	case 3:
		cout << "dm\n";
		break;
	case 4:
		cout << "m\n";
		break;
	case 5:
		cout << "dam\n";
		break;
	case 6:
		cout << "hm\n";
		break;
	case 7:
		cout << "km\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.mm; 2.cm; 3.dm;\n";
	cout << "4.m;  5.dam; 6.hm;\n";
	cout << "7.km;\n";
	cin >> n;
	dif = m - n;

	switch (dif) {
	case -6:
		lung = lung / 1000000;
		break;
	case -5:
		lung = lung / 100000;
		break;
	case -4:
		lung = lung / 10000;
		break;
	case -3:
		lung = lung / 1000;
		break;
	case -2:
		lung = lung / 100;
		break;
	case -1:
		lung = lung / 10;
		break;
	case 0:
		lung = lung;
		break;
	case 1:
		lung = lung * 10;
		break;
	case 2:
		lung = lung * 100;
		break;
	case 3:
		lung = lung * 1000;
		break;
	case 4:
		lung = lung * 10000;
		break;
	case 5:
		lung = lung * 100000;
		break;
	case 6:
		lung = lung * 1000000;
		break;
	}

	printf_s("\n%g", lung);
	switch (n) {
	case 1:
		cout << " mm\n";
		break;
	case 2:
		cout << " cm\n";
		break;
	case 3:
		cout << " dm\n";
		break;
	case 4:
		cout << " m\n";
		break;
	case 5:
		cout << " dam\n";
		break;
	case 6:
		cout << " hm\n";
		break;
	case 7:
		cout << " km\n";
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
