// ex12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	char fakeChar, operand;
	int fstNumer, fstDenumer, sndNumer, sndDenumer;

	do {
		
		cout << "Введите первую дробь, операнд и вторую дробь -> ";
		cin >> fstNumer >> fakeChar >> fstDenumer >> operand >> sndNumer >> fakeChar >> sndDenumer;
		
		switch (operand) {
			case '+':

				if (fstDenumer != sndDenumer) {					
					fstNumer *= sndDenumer;				
					sndNumer *= fstDenumer;

					sndDenumer *= fstDenumer;
					fstDenumer *= sndDenumer;
				}

				fstNumer += sndNumer;
				break;

			case '-':

				if (fstDenumer != sndDenumer) {
					fstNumer *= sndDenumer;
					sndNumer *= fstDenumer;

					sndDenumer *= fstDenumer;
					fstDenumer *= sndDenumer;
				}

				fstNumer -= sndNumer;
				break;

			case '*':
				fstNumer *= sndNumer;
				fstDenumer *= sndDenumer;
				break;

			case '/':
				fstNumer *= sndDenumer;
				fstDenumer *= sndNumer;
				break;

		}

		cout << "Ответ: " << fstNumer << "/" << fstDenumer << endl;
		cout << "Продолжить? (y/n) ";
		cin >> fakeChar;

	} while (fakeChar == 'y');

	system("PAUSE");
    return 0;
}

