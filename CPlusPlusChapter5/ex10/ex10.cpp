// ex10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int funcWithCounter();

int main()
{
	setlocale(LC_ALL, "Rus");

	for (int i = 1; i <= 10; i++)
		cout << "Calling function with counter. Returned " <<  funcWithCounter() << endl;

	system("PAUSE");
    return 0;
}

int funcWithCounter()
{
	static int counter = 0;
	return ++counter;
}