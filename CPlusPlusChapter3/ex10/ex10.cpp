// ex10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	float budg, req, proc;
	int reqYears; 

	cout << "Введите изначальную сумму -> ";
	cin >> budg;
	cout << "Введите желаемую сумму -> ";
	cin >> req;
	cout << "Введите процентную ставку -> ";
	cin >> proc;

	proc = proc / 100.0f + 1;

	for (reqYears = 1; budg < req; reqYears++)
		budg *= proc;

	cout << "Для достижения данной суммы лет необходимо: " << reqYears << endl;

	system("PAUSE");
    return 0;
}

