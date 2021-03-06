// ex6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Time
{
	int hours;
	int minutes;
	int secs;
};

long hms_to_secs(int hours, int minutes, int secs);
Time hms_to_secs(int secs);

int main()
{
	setlocale(LC_ALL, "Rus");

	int hours, minutes, secs;

	cout << "Введите количество секунд -> ";
	cin >> secs;
	Time outp = hms_to_secs(secs);
	cout << right << "Эквивалентное значение в чч/мм/сс: " << setw(2) << outp.hours << '/' << setw(2) << outp.minutes << '/' << setw(2) << outp.secs << endl << endl;

	cout << "Введите количество часов, минут и секунд -> ";
	cin >> hours >> minutes >> secs;
	cout << "Эквивалентное значение в секундах: " << hms_to_secs(hours, minutes, secs) << endl;

	system("PAUSE");
    return 0;
}

long hms_to_secs(int hours, int minutes, int secs)
{
	return (hours * 3600) + (minutes * 60) + secs;
}

Time hms_to_secs(int secs)
{
	Time outp;
	outp.hours = secs / 3600;	secs %= 3600;
	outp.minutes = secs / 60;	secs %= 60;
	outp.secs = secs;

	return outp;
}