// ex8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void swap(int& fst, int& snd);

int main()
{
	setlocale(LC_ALL, "Rus");

	int fst, snd;

	cout << "Введите два целых числа через пробел -> ";
	cin >> fst >> snd;

	cout << endl 
		<< "Значение fst: " << fst << endl
	    << "Значение snd: " << snd << endl
	    << endl
	    << "SWAP!" << endl;
	swap(fst, snd);
	cout << endl
		<< "Значение fst: " << fst << endl
		<< "Значение snd: " << snd << endl
		<< endl;
	

	system("PAUSE");
    return 0;
}

void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
}

