// ex8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Fraction
{
	int numerator;
	int denumerator;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Fraction fract1, fract2;
	char fakeChar;

	cout << "Введите числитель и знаменатель первой дроби (формат: d/d) -> ";
	cin >> fract1.numerator >> fakeChar >> fract1.denumerator;
	cout << "Введите числитель и знаменатель второй дроби (формат: d/d) -> ";
	cin >> fract2.numerator >> fakeChar >> fract2.denumerator;

	cout << "Результат сложения двух дробей: " << fract1.numerator * fract2.denumerator + fract2.numerator * fract1.denumerator << "/" << fract1.denumerator * fract2.denumerator << endl;

	system("PAUSE");
    return 0;
}

