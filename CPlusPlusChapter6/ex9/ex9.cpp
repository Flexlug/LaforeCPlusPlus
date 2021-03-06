#include <iostream>
using namespace std;

class fraction
{
	private:
		int numerator;
		int den;
	public:
		fraction() : num(0), den(0) {  };
		fraction(int num, int denum) : num(num), den(denum) {  };
		
		void getFraction();
		void putFraction();
		static fraction sumFraction(fraction fstFract, fraction sndFract);
};

void fraction::getFraction() 
{
	char fakeChar(' ');
	cin >> num >> fakeChar >> den;
};

void fraction::putFraction() 
{
	cout << num << '/' << den;
}

fraction fraction::sumFraction(fraction fstFract, fraction sndFract)
{
	return fraction(fstFract.num * sndFract.den + sndFract.num * fstFract.den, 
					fstFract.den * sndFract.den);
};

int main()
{
	fraction fstFract, sndFract;

	cout << "Enter first fraction (int / int) -> ";
	fstFract.getFraction();

	cout << "Enter second fraction (int / int) -> ";
	sndFract.getFraction();

	cout << "The result is: ";
	fraction::sumFraction(fstFract, sndFract).putFraction();
	cout << endl;


	system("pause");
    return 0;
}

