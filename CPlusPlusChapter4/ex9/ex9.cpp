// ex9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Time t1;

	cout << "Введите количество часов, минут и секунд -> ";
	cin >> t1.hours >> t1.minutes >> t1.seconds;

	cout << "Всего секунд: " << t1.hours * 3600 + t1.minutes * 60 + t1.seconds << endl;

	system("PAUSE");
    return 0;
}

