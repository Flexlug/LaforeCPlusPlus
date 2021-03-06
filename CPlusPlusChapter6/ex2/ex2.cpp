#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
	private:
		unsigned int totalCars;
		double totalProfit;
	public:
		tollBooth() : totalCars(0), totalProfit(0) {  }
		void payingCar()
		{
			totalCars++;
			totalProfit += 0.5;
		}
		void nopayCar()
		{
			totalCars++;
		}
		void display()const
		{
			cout << "Total cars: " << totalCars << "  Total profit: " << totalProfit;
		}
};

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Parking station simulation" << endl;
	cout << "Press p to simulate paying car" << endl;
	cout << "Press n to simulate car-burglar" << endl;
	cout << "Press ESC to exit program and show results -> ";

	char inp;
	tollBooth obj;

	do
	{
		inp = _getch();
		if (inp == 'p')
			obj.payingCar();
		else
			if (inp == 'n')
				obj.nopayCar();

	} while (inp != 27);

	obj.display();
	cout << endl;

	system("PAUSE");
    return 0;
}

