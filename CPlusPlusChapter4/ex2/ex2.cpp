// ex2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Point
{
	int x;
	int y;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Point p1, p2;

	cout << "Введите координаты первой точки p1 -> ";
	cin >> p1.x >> p1.y;
	cout << "Введите координаты второй точки p2 -> ";
	cin >> p2.x >> p2.y;

	cout << "Координаты точки p1+p2 равны " << p1.x + p2.x << " " << p1.y + p2.y << endl;

	system("PAUSE");
    return 0;
}

