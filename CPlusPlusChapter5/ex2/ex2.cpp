// ex2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

double power(double num, double pow);

int main()
{
	setlocale(LC_ALL, "Rus");
	
	double num, pow;

	cout << "Введите число и его степень -> ";
	cin >> num >> pow;
	cout << "Ответ: " << power(num, pow) << endl;

	system("PAUSE");
    return 0;
}

double power(double num, double pow)
{
	double ans = num;
	for (int i = 2; i <= pow; i++)
		ans *= num;
	return ans;
		
}

