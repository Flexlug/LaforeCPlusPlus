#include <iostream>
using namespace std;

class fraction
{
	private:
		int numerator;
		int denumerator;
	public:
		fraction() : numerator(0), denumerator(0) {  };
		fraction(int num, int denum) : numerator(num), denumerator(denum) {  };
		
		void getFraction();
		void putFraction();
		static fraction sumFraction(fraction fstFract, fraction sndFract);
};

void fraction::getFraction() 
{
	char fakeChar(' ');
	cin >> numerator >> fakeChar >> denumerator;
};

void fraction::putFraction() 
{
	cout << numerator << '/' << denumerator;
}

fraction fraction::sumFraction(fraction fstFract, fraction sndFract)
{
	return fraction(fstFract.numerator * sndFract.denumerator + sndFract.numerator * fstFract.denumerator, 
					fstFract.denumerator * sndFract.denumerator);
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

