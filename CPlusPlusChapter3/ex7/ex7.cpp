// ex7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int time;
	float prof, inp;

	cout << "Введите начальный вклад -> ";
	cin >> inp;
	cout << "Введите число лет -> ";
	cin >> time;
	cout << "Введите процентную ставку -> ";
	cin >> prof;

	for (int i = 1; i <= time; i++)
		inp *= 1 + (prof / 100.0f);

	cout << "Через " << time << " лет вы получите " << inp << " долларов" << endl;

	system("PAUSE");
    return 0;
}