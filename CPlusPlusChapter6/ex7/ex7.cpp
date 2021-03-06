#include <iostream>
using namespace std;

enum direction { N, S, E, W };

direction char_to_dir(char ch)
{
	switch (ch)
	{
		case 'N': 
			return N;
			break;
		case 'S':
			return S;
			break;
		case 'E':
			return E;
			break;
		case 'W':
			return W;
			break;
	}
}

char dir_to_char(direction dir)
{
	switch (dir)
	{
		case N:
			return 'N';
			break;
		case S:
			return 'S';
			break;
		case E:
			return 'E';
			break;
		case W:
			return 'W';
			break;
	}
}

class angle
{
	private:
		int deg;
		float min;
		direction dir;
	public:
		angle() : deg(0), min(0), dir(N) {  };
		angle(int new_deg, int new_min, char new_dir) : deg(new_deg), min(new_min), dir(char_to_dir(new_dir)) {  };
		angle(int new_deg, int new_min, direction new_dir) : deg(new_deg), min(new_min), dir(new_dir) {  };
		void getangle()
		{
			char new_dir;

			cout << endl;

			cout << "Enter number of degrees -> ";
			cin >> deg;
			cout << "Enter number of minutes -> ";
			cin >> min;
			cout << "Enter direction ->";
			cin >> new_dir;

			dir = char_to_dir(new_dir);
		}
		void putangle()
		{
			cout << deg << "\xF8" << min << "\' " << dir_to_char(dir);
		}
};

int main()
{
	angle proc_obj; //object, being proccesed
	char inp;

	do
	{
		proc_obj.getangle();
		cout << endl;
		proc_obj.putangle();
		cout << endl;
		cout << "Continue? (y/n) -> ";
		cin >> inp;
	} while (inp == 'y');

	system("PAUSE");
    return 0;
}