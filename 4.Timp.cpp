#include "stdafx.h"
#include"4.Timp.h"
#include<conio.h>
#include<iostream>
using namespace std;
void timp(double t) {
	
	int m, n, dif;
	char decizie;

	cout << "Alegeti unitatea de masura de convertit:\n";
	cout << "1.ms 2.s; 3.min; 4.h(ore);\n";
	cout << "5.zile; 6.saptamani; 7.ani;\n";
	cout << "8.decenii; 9.secole; 10.milenii;\n";
	cin >> m;
	cout << "\n" << t << " ";

	switch (m) {
	case 1:
		cout << "ms\n";
		break;
	case 2:
		cout << "s\n";
		break;
	case 3:
		cout << "min\n";
		break;
	case 4:
		cout << "h(ore)\n";
		break;
	case 5:
		cout << "zile\n";
		break;
	case 6:
		cout << "saptamani\n";
		break;
	case 7:
		cout << "ani\n";
		break;
	case 8:
		cout << "decenii\n";
		break;
	case 9:
		cout << "secole\n";
		break;
	case 10:
		cout << "milenii\n";
		break;
	}
	cout << "\n";
	cout << "In:\n";
	cout << "1.ms 2.s; 3.min; 4.h(ore);\n";
	cout << "5.zile; 6.saptamani; 7.ani;\n";
	cout << "8.decenii; 9.secole; 10.milenii;\n";
	cin >> n;
	dif = m - n;

	switch (dif) {
	case 0:
		t = t;
		break;
	}

	switch (m) {
	case 1:
		switch (n) {
		case 2:
			t = t / 1000;
			break;
		case 3:
			t = t / (60000);
			break;
		case 4:
			t = t / (60000 * 60);
			break;
		case 5:
			t = t / (60000 * 60 * 24);
			break;
		case 6:
			t = t / (60000 * 60 * 24 * 7);
			break;
		case 7:
			t = t / (60000 * 60 * 24 * 365.25);
			break;
		case 8:
			t = (int)t / (60000 * 60 * 24 * 365.25 * 10);
			break;
		case 9:
			t = (int)t / (60000 * 60 * 24 * 365.25 * 100);
			break;
		case 10:
			t = (int)t / (60000 * 60 * 24 * 365.25 * 1000);
			break;
		}
		break;

	case 2:
		switch (n) {
		case 1:
			t = t * 1000;
			break;
		case 3:
			t = t / 60;
			break;
		case 4:
			t = t / (60 * 60);
			break;
		case 5:
			t = t / (60 * 60 * 24);
			break;
		case 6:
			t = t / (60 * 60 * 24 * 7);
			break;
		case 7:
			t = t / (60 * 60 * 24 * 365.25);
			break;
		case 8:
			t = (int)t / (60 * 60 * 24 * 365.25 * 10);
			break;
		case 9:
			t = (int)t / (60 * 60 * 24 * 365.25 * 100);
			break;
		case 10:
			t = (int)t / (60 * 60 * 24 * 365.25 * 1000);
			break;
		}
		break;

	case 3:
		switch (n) {
		case 1:
			t = t * 1000 * 60;
			break;
		case 2:
			t = t * 60;
			break;
		case 4:
			t = t / 60;
			break;
		case 5:
			t = t / (60 * 24);
			break;
		case 6:
			t = t / (60 * 24 * 7);
			break;
		case 7:
			t = t / (60 * 24 * 365.25);
			break;
		case 8:
			t = (int)t / (60 * 24 * 365.25 * 10);
			break;
		case 9:
			t = (int)t / (60 * 24 * 365.25 * 100);
			break;
		case 10:
			t = (int)t / (60 * 24 * 365.25 * 1000);
			break;

		}
		break;

	case 4:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60;
			break;
		case 2:
			t = t * 60 * 60;
			break;
		case 3:
			t = t * 60;
			break;
		case 5:
			t = t / 24;
			break;
		case 6:
			t = t / (24 * 7);
			break;
		case 7:
			t = t / (24 * 365.25);
			break;
		case 8:
			t = (int)t / (24 * 365.25 * 10);
			break;
		case 9:
			t = (int)t / (24 * 365.25 * 100);
			break;
		case 10:
			t = (int)t / (24 * 365.25 * 1000);
			break;
		}
		break;

	case 5:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24;
			break;
		case 2:
			t = t * 60 * 60 * 24;
			break;
		case 3:
			t = t * 60 * 24;
			break;
		case 4:
			t = t * 24;
			break;
		case 6:
			t = t / 7;
			break;
		case 7:
			t = t / 365.25;
			break;
		case 8:
			t = (int)t / (365.25 * 10);
			break;
		case 9:
			t = (int)t / (365.25 * 100);
			break;
		case 10:
			t = (int)t / (365.25 * 1000);
			break;
		}
		break;

	case 6:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24 * 7;
			break;
		case 2:
			t = t * 60 * 60 * 24 * 7;
			break;
		case 3:
			t = t * 60 * 24 * 7;
			break;
		case 4:
			t = t * 24 * 7;
			break;
		case 5:
			t = t * 7;
			break;
		case 7:
			t = t / 52, 178;
			break;
		case 8:
			t = (int)t / (52, 178 * 10);
			break;
		case 9:
			t = (int)t / (52, 178 * 100);
			break;
		case 10:
			t = (int)t / (52, 178 * 1000);
			break;
		}
		break;

	case 7:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24 * 7 * 365.25;
			break;
		case 2:
			t = t * 60 * 60 * 24 * 7 * 365.25;
			break;
		case 3:
			t = t * 60 * 24 * 7 * 365.25;
			break;
		case 4:
			t = t * 24 * 7 * 365.25;
			break;
		case 5:
			t = t * 7 * 365.25;
			break;
		case 6:
			t = t * 52, 178;
			break;
		case 8:
			t = ((int)t / 10) + 1;
			break;
		case 9:
			t = ((int)t / 100) + 1;
			break;
		case 10:
			t = ((int)t / 1000) + 1;
			break;
		}
		break;

	case 8:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24 * 7 * 365.25 * 10;
			break;
		case 2:
			t = t * 60 * 60 * 24 * 7 * 365.25 * 10;
			break;
		case 3:
			t = t * 60 * 24 * 7 * 365.25 * 10;
			break;
		case 4:
			t = t * 24 * 7 * 365.25 * 10;
			break;
		case 5:
			t = t * 7 * 365.25 * 10;
			break;
		case 6:
			t = t * 52, 178 * 10;
			break;
		case 7:
			t = t * 10;
			break;
		case 9:
			t = ((int)t / 10) + 1;
			break;
		case 10:
			t = ((int)t / 100) + 1;
			break;
		}
		break;

	case 9:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24 * 7 * 365.25 * 100;
			break;
		case 2:
			t = t * 60 * 60 * 24 * 7 * 365.25 * 100;
			break;
		case 3:
			t = t * 60 * 24 * 7 * 365.25 * 100;
			break;
		case 4:
			t = t * 24 * 7 * 365.25 * 100;
			break;
		case 5:
			t = t * 7 * 365.25 * 100;
			break;
		case 6:
			t = t * 52, 178 * 100;
			break;
		case 7:
			t = t * 100;
			break;
		case 8:
			t = t * 10;
			break;
		case 10:
			t = ((int)t / 10) + 1;
			break;
		}
		break;

	case 10:
		switch (n) {
		case 1:
			t = t * 1000 * 60 * 60 * 24 * 7 * 365.25 * 1000;
			break;
		case 2:
			t = t * 60 * 60 * 24 * 7 * 365.25 * 1000;
			break;
		case 3:
			t = t * 60 * 24 * 7 * 365.25 * 1000;
			break;
		case 4:
			t = t * 24 * 7 * 365.25 * 1000;
			break;
		case 5:
			t = t * 7 * 365.25 * 1000;
			break;
		case 6:
			t = t * 52, 178 * 1000;
			break;
		case 7:
			t = t * 1000;
			break;
		case 8:
			t = t * 100;
			break;
		case 9:
			t = t * 10;
			break;
		}
		break;
	}

	printf_s("\n%g\n", t);
	switch (n) {
	case 1:
		cout << "ms\n";
		break;
	case 2:
		cout << "s\n";
		break;
	case 3:
		cout << "min\n";
		break;
	case 4:
		cout << "h(ore)\n";
		break;
	case 5:
		cout << "zile\n";
		break;
	case 6:
		cout << "saptamani\n";
		break;
	case 7:
		cout << "ani\n";
		break;
	case 8:
		cout << "decenii\n";
		break;
	case 9:
		cout << "secole\n";
		break;
	case 10:
		cout << "milenii\n";
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