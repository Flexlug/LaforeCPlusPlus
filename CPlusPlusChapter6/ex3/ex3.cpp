#include <iostream>
using namespace std;

class time
{
	private:
		int hours;
		int mins;
		int secs;
	public:
		time() : hours(0), 
				 mins(0),  
				 secs(0) {  };
		time(int start_hours, int start_mins, int start_secs) : hours(start_hours),
																mins(start_mins),
																secs(start_secs) { } ;
		void print() const
		{
			cout << hours << ":" << mins << ":" << secs;
		}

		static time sum(time fst, time snd) 
		{
			return time(fst.hours + snd.hours, fst.mins + snd.mins, fst.secs + snd.secs);
		}
};

int main()
{
	time empty_obj;
	const time fst_obj(2, 2, 2), snd_obj(2, 5, 3);	

	cout << "First object: ";
	fst_obj.print();
	cout << endl;
	cout << "Second object: ";
	snd_obj.print();
	cout << endl;

	empty_obj = time::sum(fst_obj, snd_obj);
	cout << "Summation result: ";
	empty_obj.print();
	cout << endl;

	system("PAUSE");
}