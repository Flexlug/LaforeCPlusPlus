// ex6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

enum etype
{
	laborer,
	secretary,
	manager,
	accountant,
	executive,
	researcher
};

int main()
{
	setlocale(LC_ALL, "Rus");

	char fstLetter;
	etype employee;

	cout << "Введите первую букву должности" << endl
		<< "Возможные варианты: (laborer, secretary, manager, accoutnant, executive, researcher) -> ";
	cin >> fstLetter;



	cout << endl << "Полное название должности: ";

	switch (fstLetter) {
		case 'l':
			cout << "laborer";
			break;
		case 's':
			cout << "secretary";
			break;
		case 'm':
			cout << "manager";
			break;
		case 'a':
			cout << "accountant";
			break;
		case 'e':
			cout << "executive";
			break;
		case 'r':
			cout << "researcher";
			break;
		default:
			cout << "отсутствует";
	}

	cout << endl;

	system("PAUSE");
    return 0;
}

