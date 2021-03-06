// ex12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Fraction
{
	int numerator;
	int denumerator;
};

Fraction fadd(Fraction fst, Fraction snd);
Fraction fsub(Fraction fst, Fraction snd);
Fraction fmul(Fraction fst, Fraction snd);
Fraction fdiv(Fraction fst, Fraction snd);

int main()
{
	setlocale(LC_ALL, "Rus");

	char inp, operand;

	do {
		int num1, denum1, num2, denum2;
		Fraction fstFract, sndFract;
		cout << "Enter two fractions and seperate them with operand (Example: value1/value2 + value3/value4) -> ";
		cin >> num1 >> inp >> denum1 >> operand >> num2 >> inp >> denum2;
		fstFract = { num1, denum1 };
		sndFract = { num2, denum2 };

		Fraction ans;

		switch (operand)
		{
			case '+':
				ans = fadd(fstFract, sndFract);
				break;
			case '-':
				ans = fsub(fstFract, sndFract);
				break;
			case '*':
				ans = fmul(fstFract, sndFract);
				break;
			case '/':
				ans = fdiv(fstFract, sndFract);
				break;
		}

		cout << "Result: " << ans.numerator << '/' << ans.denumerator << endl;
		cout << "Continue? (y/n) ";
		cin >> inp;

	} while (inp == 'y');

	system("PAUSE");
    return 0;
}

Fraction fadd(Fraction fst, Fraction snd)
{
	return { fst.numerator * snd.denumerator + snd.numerator * fst.denumerator,
			 fst.denumerator * snd.denumerator };
}

Fraction fsub(Fraction fst, Fraction snd)
{
	return { fst.numerator * snd.denumerator - snd.numerator * fst.denumerator,
			 fst.denumerator * snd.denumerator };
}

Fraction fmul(Fraction fst, Fraction snd)
{
	return { fst.numerator * snd.numerator,
			 fst.denumerator * snd.denumerator };
}

Fraction fdiv(Fraction fst, Fraction snd)
{
	return { fst.numerator * snd.denumerator,
			 fst.denumerator * snd.numerator };
}