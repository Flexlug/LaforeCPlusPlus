// ex3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	long inp = 0;

	cout << "Введите число -> ";
	for (int i = 1; i <= 6; i++)
	{
		inp = inp * 10 + static_cast<char>(_getche() - '0');
	}

	cout << "\nВы ввели число: " << inp << endl;
	

	system("PAUSE");
    return 0;
}

