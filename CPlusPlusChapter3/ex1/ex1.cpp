// CPlusPlusChapter3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int inp;
	cout << "Ввдеите число -> ";
	cin >> inp;

	for (int i = 1; i <= 30; i++) 
	{
		cout << inp * i;
		if (i % 10 == 0)
			cout << endl;
	}
	system("PAUSE");
    return 0;
}

