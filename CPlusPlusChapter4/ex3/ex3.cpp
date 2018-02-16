// ex3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Distance 
{
	float futs;
	float inches;
};

struct Volume 
{
	Distance width;
	Distance length;
	Distance height;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Volume room;

	cout << "Введите ширину комнаты в футах и дюймах -> ";
	cin >> room.width.futs >> room.width.inches;

	cout << "Введите длину комнаты в футах и дюймах -> ";
	cin >> room.length.futs >> room.length.inches;

	cout << "Введите высоту комнаты в футоах и дюймах -> ";
	cin >> room.height.futs >> room.height.inches;

	cout << "Объем комнаты: " <<
		(room.width.futs + room.width.inches / 12.0f) *
		(room.length.futs + room.length.inches / 12.0f) *
		(room.height.futs + room.height.inches / 12.0f)
		<< endl;
		
	system("PAUSE");
    return 0;
}

