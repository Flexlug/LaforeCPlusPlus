// ex6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int numb;
	char inp = 'y';
	do {
		unsigned long long fact = 1;
		cout << "Введите целое число -> ";
		cin >> numb;
		for (int i = numb; i > 0; i--)
		{
			fact *= i;
		}
		cout << "Факториал числа равен: " << fact << endl;
		cout << "Выполнить еще одну операцию? (y/n) ";
		cin >> inp;
	} while (inp == 'y');

	system("PAUSE");
    return 0;
}

