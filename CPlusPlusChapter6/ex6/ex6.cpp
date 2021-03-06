#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accoutnant, executive, researcher, none};

class employee
{
	private:
		int id;
		float salary;
		etype emp_type;

	public:
		employee() : id(0), salary(0), emp_type(none) {  };		
		void getemploy() 
		{
			char fst_letter;

			cout << "Enter ID -> ";
			cin >> id;
			cout << "Enter salary -> ";
			cin >> salary;
			cout << "Enter first letter of necessary role (laborer, secretary, manager, accountant, executive, reseacher) -> ";
			cin >> fst_letter;

			switch (fst_letter)
			{
				case 'L':
				case 'l':
					emp_type = laborer;
					break;
				case 'S':
				case 's':
					emp_type = secretary;
					break;
				case 'M':
				case 'm':
					emp_type = manager;
					break;
				case 'A':
				case 'a':
					emp_type = accoutnant;
					break;
				case 'E':
				case 'e':
					emp_type = executive;
					break;
				case 'R':
				case 'r':
					emp_type = researcher;
					break;
			}
		}
		void putemploy()
		{
			cout << "ID: " << id << " Salary: " << salary << " Role: ";
			switch (emp_type)
			{
				case laborer:
					cout << "laborer";
					break;
				case secretary:
					cout << "secretary";
					break;
				case manager:
					cout << "manager";
					break;
				case accoutnant:
					cout << "accountant";
					break;
				case executive:
					cout << "executive";
					break;
				case researcher:
					cout << "researcher";
					break;
			}
		}
};

int main()
{
	employee emp1, emp2, emp3;

	cout << "Processing 1-st employee: " << endl;
	emp1.getemploy();

	cout << "------------------------" << endl;

	cout << "Processing 2-nd employee: " << endl;
	emp2.getemploy();

	cout << "------------------------" << endl;

	cout << "Processing 3-rd employee: " << endl;
	emp3.getemploy();

	cout << endl << "########################" << endl << endl;
		    
	emp1.putemploy();
	cout << endl;

	emp2.putemploy();
	cout << endl;
	
	emp3.putemploy();
	cout << endl;

	system("PAUSE");
    return 0;
}

