// ex1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

float circarea(float r);

int main()
{
	setlocale(LC_ALL, "Rus");

	float r;

	cout << "Введите радиус окружности -> ";
	cin >> r;
	cout << "Площадь окружности: " << circarea(r) << endl;

	system("PAUSE");
    return 0;
}

float circarea(float r)
{
	static const float PI = 3.14159F;
	return PI * r * r;
}

