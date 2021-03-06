// ex11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL, "Rus");

	int fstFunt, fstShil, fstPens, sndFunt, sndShil, sndPens;
	char operand;

	do {

		fstFunt = 0;
		fstShil = 0;
		fstPens = 0;
		sndFunt = 0;
		sndShil = 0;
		sndPens = 0;

		cout << "Введите первую сумму денег, операнд и вторую сумму денег -> ";
		cin >> fstFunt >> fstShil >> fstPens >> operand >> sndFunt >> sndShil >> sndPens;

		switch (operand) {
		case '+':
			fstFunt += sndFunt;
			fstShil += sndShil;
			fstPens += sndPens;

			fstFunt += fstShil / 20; sndShil %= 20;
			fstShil += sndPens / 20; sndPens %= 20;

			break;
		case '-':
			fstFunt -= sndFunt;
			fstShil -= sndShil;
			fstPens -= sndPens;

			if (fstPens < 0) {
				int reqShil = abs(fstPens) / 12 + 1;
				fstShil -= reqShil;
				fstPens += reqShil * 20;
			}

			if (fstShil < 0) {
				int reqFunt = abs(fstShil) / 20 + 1;
				fstFunt -= reqFunt + reqFunt;
				fstShil += reqFunt * 20;
			}

			if (fstFunt < 0) {
				cout << "Прошу прощения, но вы ушли в долг, cэр" << endl;
			}

			break;
		default:
			cout << "Неизвестная операция" << endl;
			break;
		}

		cout << "Всего: " << fstFunt << " " << fstShil << " " << fstPens << endl;
		cout << "Продолжить? (y/n) ";
		cin >> operand;

	} while (operand == 'y');

    return 0;
}

