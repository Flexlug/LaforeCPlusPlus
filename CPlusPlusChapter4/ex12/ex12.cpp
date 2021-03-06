// ex12.cpp: определяет точку входа для консольного приложения.
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

	Fraction f1, f2, f3;
	char operand, fakeChar;

	cout << "Введите первую дробь, знак операции и вторую дробь -> ";
	cin >> f1.numerator >> fakeChar >> f1.denumerator >> operand >> f2.numerator >> fakeChar >> f2.denumerator;

	switch (operand) {
		case '+':
			f3.numerator = f1.numerator * f2.denumerator + f2.numerator * f1.denumerator;
			f3.denumerator = f1.denumerator * f2.denumerator;
			break;
		case '-':
			f3.numerator = f1.numerator * f2.denumerator + f2.numerator * f1.denumerator;
			f3.denumerator = f1.denumerator * f2.denumerator;
			break;
	}	

	cout << "Итог: " << f3.numerator << '/' << f3.denumerator << endl;

	system("PAUSE");
    return 0;
}

