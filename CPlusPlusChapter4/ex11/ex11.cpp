// ex11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Time
{
	int secs;
	int mins;
	int hours;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Time inp;
	char fakeChar;

	cout << "Введите время в формате hh:mm:ss -> ";
	cin >> inp.hours >> fakeChar >> inp.mins >> fakeChar >> inp.secs;
	cout << "Общее количество секунд: " << inp.hours * 3600 + inp.mins * 60 + inp.secs << endl;

	system("PAUSE");
    return 0;
}

