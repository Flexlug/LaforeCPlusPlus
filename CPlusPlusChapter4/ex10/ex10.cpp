// ex10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Sterling
{
	int funt;
	int shillings;
	int pence;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Sterling mon;

	cout << "Введите количество фунтов, шилингов и пенсов -> ";
	cin >> mon.funt >> mon.shillings >> mon.pence;

	int totalPence = mon.pence + mon.shillings * 12 + mon.funt * 240;

	cout << "Всего: " << totalPence / 10 << " фунтов " << totalPence % 10 << " пенсов" << endl;


	system("PAUSE");
    return 0;
}

