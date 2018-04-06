#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
	private:
		int numerator;
		int denumerator;
	public:
		fraction() : numerator(0), denumerator(0) {  };
		fraction(int num, int denum) : numerator(num), denumerator(denum) {  };
		void getFract();
		void putFract();
		void lowTerms();

		static fraction sumFract(fraction fstFract, fraction sndFract);
		static fraction difFract(fraction fstFract, fraction sndFract);
		static fraction mulFract(fraction fstFract, fraction sndFract);
		static fraction divFract(fraction fstFract, fraction sndFract);
};

void fraction::getFract()
{
	char fakeChar(' ');
	cin >> numerator >> fakeChar >> denumerator;
}

void fraction::putFract()
{
	cout << numerator << '/' << denumerator;
}

void fraction::lowTerms()
{
	long tnum, tden, temp, gcd;
	tnum = labs(numerator);
	tden = labs(denumerator);

	if (tden == 0)
	{
		cout << "Недопустивмый знаменатель!";
		exit(1);
	}
	else
		if (tnum ==  0)
		{
			temp = 0;
			tnum = 1;
			return;
		}
	while (tnum != 0)
	{
		if (tnum < tden)
		{
			temp = tnum;
			tnum = tden;
			tden = temp;
		}
		tnum -= tden;
	}
	gcd = tden;
	numerator /= gcd;
	denumerator /= gcd;
}

fraction fraction::sumFract(fraction fstFract, fraction sndFract) 
{
	return fraction(fstFract.numerator * sndFract.denumerator + sndFract.numerator * fstFract.denumerator,
					fstFract.denumerator * sndFract.denumerator);
}

fraction fraction::difFract(fraction fstFract, fraction sndFract)
{
	return fraction(fstFract.numerator * sndFract.denumerator - sndFract.numerator * fstFract.denumerator,
		fstFract.denumerator * sndFract.denumerator);
}

fraction fraction::mulFract(fraction fstFract, fraction sndFract)
{
	return fraction(fstFract.numerator * sndFract.numerator, fstFract.denumerator * sndFract.denumerator);
}

fraction fraction::divFract(fraction fstFract, fraction sndFract)
{
	return fraction(fstFract.numerator * sndFract.denumerator, fstFract.denumerator * sndFract.numerator);
}

int main()
{
	fraction fstFract, sndFract, ansFract;

	int num1, num2, denum1, denum2;
	char fakeChar, operand, responce('n');

	do {

		cout << "Enter command (int/int [operator] int/int) -> ";
		cin >> num1 >> fakeChar >> denum1 >> operand >> num2 >> fakeChar >> denum2;

		fstFract = fraction(num1, denum1);
		sndFract = fraction(num1, denum1);		

		switch (operand) 
		{
			case '+':
				ansFract = fraction::sumFract(fstFract, sndFract);
				ansFract.lowTerms();
				ansFract.putFract();
				cout << endl;
				break;
			case '-':
				ansFract = fraction::difFract(fstFract, sndFract);
				ansFract.lowTerms();
				ansFract.putFract();
				cout << endl;
				break;
			case '*':
				ansFract = fraction::mulFract(fstFract, sndFract);
				ansFract.lowTerms();
				ansFract.putFract();
				cout << endl;
				break;
			case '/':
				ansFract = fraction::difFract(fstFract, sndFract);
				ansFract.lowTerms();
				ansFract.putFract();
				cout << endl;
				break;
		}

		cout << "Continue? (y/n) -> ";
		cin >> responce;

	} while (responce == 'y');
	
	system("pause");

    return 0;
}

