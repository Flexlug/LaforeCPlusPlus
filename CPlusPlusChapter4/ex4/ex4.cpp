// ex4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct Employee
{
	int id;
	float salary;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Employee emp1, emp2, emp3;

	cout << "Введите id первого сотрудника и велечину его пособия -> ";
	cin >> emp1.id >> emp1.salary;

	cout << "Введите id второго сотрудника и велечину его пособия -> ";
	cin >> emp2.id >> emp2.salary;

	cout << "Введите id третьего сотрудника и велечину его пособия -> ";
	cin >> emp3.id >> emp3.salary;

	cout << endl << right
		<< "ID первого сотрудника:  " << setw(4) << emp1.id << ", величина пособия: " << setw(8) << emp1.salary << endl
		<< "ID второго сотрудника:  " << setw(4) << emp2.id << ", величина пособия: " << setw(8) << emp2.salary << endl
		<< "ID третьего сотрудника: " << setw(4) << emp3.id << ", величина пособия: " << setw(8) << emp3.salary << endl;

	system("PAUSE");
    return 0;
}

