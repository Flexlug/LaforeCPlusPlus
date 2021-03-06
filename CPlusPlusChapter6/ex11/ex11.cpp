#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
	private:
		int num;
		int den;
	public:
		fraction() : num(0), den(0) {  };
		fraction(int num, int denum) : num(num), den(denum) {  };
		void lowTerms();

		int getNum() {
			return num;
		}

		int getDen() {
			return den;
		}

		void sumWith(fraction fract);
		void difWith(fraction fract);
		void mulWith(fraction fract);
		void divWith(fraction fract);
};

void fraction::lowTerms()
{
	long tnum, tden, temp, gcd;
	tnum = labs(num);
	tden = labs(den);

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
	num /= gcd;
	den /= gcd;
}

void fraction::sumWith(fraction fract) {

	num *= fract.den;
	fract.num *= den;
	den *= fract.den;

	num += fract.num;
}

void fraction::difWith(fraction fract) {
	fract.num *= den;
	num *= fract.den;
	den *= fract.den;

	num -= fract.num;
}

void fraction::mulWith(fraction fract) {
	num *= fract.num;
	den *= fract.den;
}

void fraction::divWith(fraction fract) {
	num *= fract.den;
	den *= fract.num;
}

int main()
{
	fraction fstFract, sndFract;

	int num1, num2, den1, den2;
	char inp, oper, responce('n');

	do {

		cout << "Enter command (int/int [operator] int/int) -> ";
		cin >> num1 >> inp >> den1 >> oper >> num2 >> inp >> den2;

		fstFract = fraction(num1, den1);
		sndFract = fraction(num2, den2);		

		switch (oper) 
		{
			case '+':
				fstFract.sumWith(sndFract);
				break;
			case '-':
				fstFract.difWith(sndFract);
				break;
			case '*':
				fstFract.mulWith(sndFract);
				break;
			case '/':
				fstFract.divWith(sndFract);
				break;
		}

		fstFract.lowTerms();
		cout << "Answer: " << fstFract.getNum() << '/' << fstFract.getDen() << endl;
		cout << "Continue? (y/n) -> ";
		cin >> responce;

	} while (responce == 'y');
	
	system("pause");

    return 0;
}

