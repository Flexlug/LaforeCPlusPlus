#include <iostream>

class Int
{
	private:
		int field;
	public:
		Int() : field(0) {  }
		void set_int(int val);
		void set_int();
		void add_int(Int val);
		int  get_int();


};

void Int::set_int(int val)
{
	field = val;
}

void Int::set_int()
{
	std::cin >> field;
}

int Int::get_int()
{
	return field;
}

void Int::add_int(Int val)
{
	field += val.get_int();
}


int main()
{

	setlocale(LC_ALL, "Rus");

	Int obj1, obj2, obj3;
	std::cout << "Enter value of obj1 -> ";
	obj1.set_int();

	std::cout << "Etner value of obj2 -> ";
	obj2.set_int();

	obj3.add_int(obj1);
	obj3.add_int(obj2);

	std::cout << "Result: " << obj3.get_int() << std::endl;

	system("PAUSE");
    return 0;
}


