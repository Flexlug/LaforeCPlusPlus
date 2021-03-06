// ex5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

long hms_to_secs(int hours, int minutes, int secs);

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int hours, minutes, secs;
	char inp;

	do
	{
		cout << "Введите количество часов, минут и секунд через пробел -> ";
		cin >> hours >> minutes >> secs;
		cout << "Количество секунд: " << hms_to_secs(hours, minutes, secs) << endl;
		cout << "Продолжить? (y/n) ";
		cin >> inp;
	} while (inp == 'y');


	system("PAUSE");
    return 0;
	
}

long hms_to_secs(int hours, int minutes, int secs) 
{
	return (hours * 3600) + (minutes * 60) + secs;
}