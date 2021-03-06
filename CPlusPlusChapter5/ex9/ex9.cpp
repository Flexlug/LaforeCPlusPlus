// ex9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Time
{
	int hours;
	int minutes;
	int secs;
};

void swap(Time& fst, Time& snd);
void print_time(Time& t);

int main()
{
	setlocale(LC_ALL, "Rus");

	Time
		fst = { 1, 5, 2  },
		snd = { 2, 55, 3 };

	cout << "Значение fst: ";
	print_time(fst);
	cout << endl;

	cout << "Значение snd: ";
	print_time(snd);
	cout << endl;
	
	cout << endl
	    << "SWAP!"
	    << endl;

	swap(fst, snd);

	cout << "Значение fst: ";
	print_time(fst);
	cout << endl;

	cout << "Значение snd: ";
	print_time(snd);
	cout << endl;
	
	system("PAUSE");
    return 0;
}

void print_time(Time& t)
{
	cout << right << setfill('0')
		<< setw(2) << t.hours << '/'
		<< setw(2) << t.minutes << '/'
		<< setw(2) << t.secs;
}

void swap(Time& fst, Time& snd)
{
	Time temp = fst;
	fst = snd;
	snd = temp;
}