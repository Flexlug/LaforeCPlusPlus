// ex3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void zeroSmaller(int& fst, int& snd);

int main()
{
	setlocale(LC_ALL, "Rus");

	int fst, snd;
	cout << "Введите первое и второе значение функции -> ";
	cin >> fst >> snd;
	zeroSmaller(fst, snd);
	cout << "Результат работы функции: " << fst << " " << snd << endl;

	system("PAUSE");
    return 0;
}

void zeroSmaller(int& fst, int& snd)
{
	if (fst > snd)
		snd = 0;
	else
		fst = 0;
}

