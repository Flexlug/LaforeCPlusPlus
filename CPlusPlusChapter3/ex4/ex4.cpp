// ex4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	char operand, choice;
	float fstNum, sndNum;

	do {
		cout << "Введите первый операнд, операцию и второй операнд -> ";
		cin >> fstNum >> operand >> sndNum;

		switch (operand) 
		{
			case '+':
				cout << "Результат равен " << fstNum + sndNum << endl;
				break;
			case '-':
				cout << "Результат равен " << fstNum - sndNum << endl;
				break;
			case '/':
				cout << "Результат равен " << fstNum / sndNum << endl;
				break;
			case '*':
				cout << "Результат равен " << fstNum * sndNum << endl;
				break;
			default:
				cout << "Операция не распознана" << endl;
				break;
		}

		cout << "Выполнить еще одну операцию (y/n)? ";
		cin >> choice;

	} while (choice == 'y');

	system("PAUSE");
    return 0;
}

