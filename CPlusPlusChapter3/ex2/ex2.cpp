// ex2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int choice = 0;
	float temp = 0.0f;


	do {
		cout << "Ввдеите 1 для перевода шкалы Цельсия в шкалу Фаренгейта" << endl;
		cout << "2 для перевода шкалы Фаренгейта в шкула Цельсия -> ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Ввдеите температуру по Фаренгейту -> ";
			cin >> temp;
			cout << "Значение по Цельсию: " << (temp - 32) * 5.0f / 9.0f << endl;
			break;

		case 2:
			cout << "Введите температуру по Цельсию -> ";
			cin >> temp;
			cout << "Значение по Фаренгейту: " << temp * 1.8f + 32.0f << endl;
			break;

		default:
			cout << "Такого варианта выбора нет" << endl;
			break;
		}
	} while (choice == 0);

	system("PAUSE");

    return 0;
}

