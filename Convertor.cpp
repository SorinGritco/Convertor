// Convertor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "1.Lungime.h"
#include "2.Arie.h"
#include "3.Volum.h"
#include "4.Timp.h"
#include "5.Viteza.h"
#include "6.Temperatura.h"
#include "7.Masa.h"
#include "8.Energie.h"
#include "9.Presiune.h"
#include "10.Densitate.h"
#include "11.Consum combustibil.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	float l;
	double ar, vol, t, vit, temp, mass, energ, pres, dens, cons;
_label2:
	system("cls");
	int n;
	cout << "1. Lungime\n";
	cout << "2. Arie\n";
	cout << "3. Volum\n";
	cout << "4. Timp\n";
	cout << "5. Viteza\n";
	cout << "6. Temperatura\n";
	cout << "7. Masa\n";
	cout << "8. Energie\n";
	cout << "9. Presiune  (bar to psi)\n";
	cout << "10.Densitate\n";
	cout << "11.Consum combustibil\n";
	cout << "\nAlegeti marimea fizica: ";
	while (!(cin >> n) || (n<1 && n>11)) {
		cout << "Invalid Input. Incearca inca o data!" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		goto _label1;
	}
	switch (n) {
	case 1:
		cout << "\nLungime: ";
		while (!(cin >> l)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		lungime(l);
		break;
	case 2:
		cout << "\nArie: ";
		while (!(cin >> ar)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		arie(ar);
		break;
	case 3:
		cout << "\nVolum: ";
		while (!(cin >> vol)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		volum(vol);
		break;
	case 4:
		cout << "\nTimp: ";
		while (!(cin >> t)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		timp(t);
		break;
	case 5:
		cout << "\nViteza: ";
		while (!(cin >> vit)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		viteza(vit);
		break;
	case 6:
		cout << "\nTemperatura: ";
		while (!(cin >> temp)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		temperatura(temp);
		break;
	case 7:
		cout << "\nMasa: ";
		while (!(cin >> mass)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		masa(mass);
		break;
	case 8:
		cout << "\nEnergie: ";
		while (!(cin >> energ)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		energie(energ);
		break;
	case 9:
		cout << "\nPresiune: ";
		while (!(cin >> pres)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		presiune(pres);
		break;
	case 10:
		cout << "\nDensitate: ";
		while (!(cin >> dens)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		densitate(dens);
		break;
	case 11:
		cout << "\nConsum combustibil: ";
		while (!(cin >> cons)) {
			cout << "Invalid Input. Incearca inca o data!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		consum(cons);
		break;
	}
_label1:
	goto _label2;
	return 0;
}
