// ex7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

long  power(int inp,   int pow);
float power(float inp, int pow);
long  power(long inp,  int pow);
long  power(char inp,  int pow);

int main()
{
	setlocale(LC_ALL, "Rus");

	int pow;

	int inp1;
	cout << "long  power(int inp,   int pow) TEST" << endl;
	cout << "Введите целое число, возводимое в степень и его степень -> ";
	cin >> inp1 >> pow;
	cout << "Результат: " << power(inp1, pow) << endl;

	cout << endl << endl;

	float inp2;
	cout << "float power(float inp, int pow) TEST" << endl;
	cout << "Введите вещественное число, вовзодимое в степень и его степень -> ";
	cin >> inp2 >> pow;
	cout << "Результат: " << power(inp2, pow) << endl;

	cout << endl << endl;

	char inp3;
	cout << "long  power(long inp,  int pow) TEST" << endl;
	cout << "Введите целое число, возводимое в степень и его степень -> ";
	cin >> inp3 >> pow;
	cout << "Результат: " << power(inp3, pow) << endl;

	cout << endl << endl;

	char inp4;
	cout << "long  power(char inp,  int pow) TEST" << endl;
	cout << "Введите символ, код которого эквивалентен числу, возводимому в степень и его степень -> ";
	cin >> inp4 >> pow;
	cout << "Результат: " << power(inp4, pow) << endl;

	cout << endl << endl;

	system("PAUSE");
    return 0;
}

long power(int inp, int pow)
{
	long outp = inp;
	for (int i = 2; i <= pow; i++)
		outp *= inp;
	return outp;
}

float power(float inp, int pow)
{
	float outp = inp;
	for (int i = 2; i <= pow; i++)
		outp *= inp;
	return outp;
}

long power(long inp, int pow)
{
	long outp = inp;
	for (int i = 2; i <= pow; i++)
		outp *= inp;
	return outp;
}

long power(char inp, int pow)
{
	long outp = static_cast<int>(inp);
	for (int i = 2; i <= pow; i++)
		outp *= inp;
	return outp;
}