// ex8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, 
		suma = 0, 
		sumb = 0, 
		sumc = 0;
	char inp;

	cout << "Введите сумму -> ";
	cin >> a >> b >> c;
	suma += a;
	sumb += b;
	sumc += c;

	do {
		cout << "Введите сумму -> ";
		cin >> a >> b >> c;
		suma += a;
		sumb += b;
		sumc += c;

		sumb += sumc / 12;
		sumc %= 12;

		suma += sumb / 20;
		sumb %= 20;

		cout << "Всего: " << suma << " " << sumb << " " << sumc << " " << endl;
		cout << "Продолжить (y/n)? ";
		cin >> inp;
	} while (inp == 'y');

	system("PAUSE");
    return 0;
}

