// ex5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	cout << right;

	for (int i = 1; i <= 20; i++) 
	{
		for (int ii = 20 - i; ii >= 0; ii--) 
		{
			cout << ' ';
		}
		for (int ii = i + (i - 1); ii > 0; ii--)
		{
			cout << '#';
		}
		cout << endl;
	}

	system("PAUSE");
    return 0;
}

