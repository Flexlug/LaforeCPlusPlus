// ex9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int count;

	cout << "Введите количество гостей -> ";
	cin >> count;

	for (int i = count - 1; i > 1; i--)
		count *= i;

	cout << "Количество возможных комбинаций: " << count << endl;

	system("PAUSE");
    return 0;
}

