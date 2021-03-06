// ex11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Sterling
{
	int funt;
	int shill;
	int pence;
};

Sterling  toSterling(int funt, int shill, int pence);
Sterling sumSterling(Sterling fst, Sterling snd);
void printSterling(Sterling stng);

int main()
{
	setlocale(LC_ALL, "Rus");

	int funts, shills, pence;

	cout << "Enter number of funts, shillings and pence -> ";
	cin >> funts >> shills >> pence;

	Sterling stg1 = toSterling(funts, shills, pence);

	cout << "Enter number of funts, shillings and pence -> ";
	cin >> funts >> shills >> pence;

	Sterling stg2 = toSterling(funts, shills, pence);

	Sterling sumOfStgs = sumSterling(stg1, stg2);

	cout << "Summation result: ";
	printSterling(sumOfStgs);
	cout << endl;

	system("PAUSE");
    return 0;
}

Sterling toSterling(int funt, int shill, int pence)
{
	return { funt, shill, pence };
}

Sterling sumSterling(Sterling fst, Sterling snd)
{
	Sterling sum = { fst.funt + snd.funt, fst.shill + snd.shill, fst.pence + snd.pence };
	sum.shill += sum.pence / 12;
	sum.pence %= 12;

	sum.funt += sum.shill / 20;
	sum.shill %= 20;

	return sum;
}

void printSterling(Sterling stng)
{
	cout << left << setw(3) << stng.funt << setw(3) << stng.shill << setw(3) << stng.pence << setw(1);
}