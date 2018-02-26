#include <iostream>
#include <iomanip>
using namespace std;

class date
{
	private:
		int month;
		int day;
		int year;
	public:
		date() : month(0), day(0), year(0) {  };
		void getdate()
		{
			char fake_char;
			cin >> month >> fake_char >> day >> fake_char >> year;
		}
		void showdate()
		{
			cout << right << setfill('0') << setw(2) <<  month << '/' << setw(2) << day << '/' << setw(4) << year;
		}
};

int main()
{
	date sample_date;

	cout << "Enter date on format MM/DD/YYYY ->";
	sample_date.getdate();
	cout << "Value stored: ";
	sample_date.showdate();
	cout << endl;

	system("PAUSE");
    return 0;
}

