#include <iostream>
using namespace std;

class employee
{
	private: 
		int id;
		float salary;

	public:
		employee() : id(0), salary(0) {  };
		void set_id(int new_id) 
		{
			id = new_id;
		}
		void set_salary(float new_salary) 
		{
			salary = new_salary;
		}
		void print_info() 
		{
			cout << "ID: " << id << " Salary: " << salary;
		}
};

void set_emp_info(employee &emp)
{
	int id;
	float salary;

	cout << "Enter ID of new employee -> ";
	cin >> id;
	cout << "Enter salary of new employee -> ";
	cin >> salary;

	emp.set_id(id);
	emp.set_salary(salary);
}

int main()
{
	employee emp1, emp2, emp3;

	set_emp_info(emp1);
	set_emp_info(emp2);
	set_emp_info(emp3);

	cout << endl;

	cout << "First employee: ";
	emp1.print_info();
	cout << endl;

	cout << "Second employee: ";
	emp2.print_info();
	cout << endl;

	cout << "Third employee: ";
	emp3.print_info();
	cout << endl;

	system("PAUSE");
    return 0;
}

