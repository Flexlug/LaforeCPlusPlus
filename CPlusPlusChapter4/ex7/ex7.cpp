// ex7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

enum Etype 
{
	laborer,
	secretary,
	manager,
	accountant,
	executive,
	researcher
};

struct Date
{
	int day;
	int month;
	int year;
};

struct Employee
{
	int id;
	int salary;
	Date admissionDate;
	Etype job;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Employee emp1;
	char fakeChar, fstLetter;

	cout << "Введите ID работника и его заработную плату -> ";
	cin >> emp1.id >> emp1.salary;

	cout << "Введите первую букву должности работника \nВозмонжные варианты: laborer, secretary, manager, accoutnant, executive, researcher\n-> ";
	cin >> fstLetter;

	switch (fstLetter)
	{
	case 'l':
		emp1.job = laborer;
		break;
	case 's':
		emp1.job = secretary;
		break;
	case 'm':
		emp1.job = manager;
		break;
	case 'a':
		emp1.job = accountant;
		break;
	case 'e':
		emp1.job = executive;
		break;
	case 'r':
		emp1.job = researcher;
		break;
	default:
		cout << "Такая должность не найдена" << endl;
		break;
	}

	cout << "Введите дату зачисления сотрудника на работу (формат: dd/mm/yyyy) -> ";
	cin >> emp1.admissionDate.day >> fakeChar >> emp1.admissionDate.month >> fakeChar >> emp1.admissionDate.year;	

	system("PAUSE");
    return 0;
}

