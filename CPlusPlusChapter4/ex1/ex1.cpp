// CPlusPlusChapter4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct TelNumber 
{
	int CityCode;
	int TelStationCode;
	int ClientCode;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	TelNumber
		myNumber{ 965, 412, 922 },
		guestNumber;

	cout << "Введите код региона, номер станции и номер абонента -> ";
	cin >> guestNumber.CityCode >> guestNumber.TelStationCode >> guestNumber.ClientCode;

	cout << right << setfill('0');
	cout << "Мой номер: (" << myNumber.CityCode	   << ") " << myNumber.TelStationCode    << "-" << setw(4) << myNumber.ClientCode    << endl;
	cout << "Ваш номер: (" << guestNumber.CityCode << ") " << guestNumber.TelStationCode << "-" << setw(4) << guestNumber.ClientCode << endl;

	system("PAUSE");
    return 0;
}

