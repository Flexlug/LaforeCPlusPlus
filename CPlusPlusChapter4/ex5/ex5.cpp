// ex5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Date
{
	int day;
	int month;
	int year;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Date inputDate;
	char fakeChar;

	cout << "Введите дату в формате dd/mm/yyyy -> ";
	cin >> inputDate.day >> fakeChar >> inputDate.month >> fakeChar >> inputDate.year;

	cout << endl << endl << setfill('0') << right
		<< "Вы ввели следующую дату: " << endl
		<< setw(2) << inputDate.day << "/" << setw(2) << inputDate.month << "/" << setw(2) << inputDate.year << endl;

	system("PAUSE");
    return 0;
}

