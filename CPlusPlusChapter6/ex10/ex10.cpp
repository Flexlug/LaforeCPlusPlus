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
};

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
};

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

class ship {
private:
	static int shipCount;
	int currentNum;
	angle cord;
public:
	ship(int deg, int min, char dir) : cord(deg, min, dir), currentNum(shipCount) {
		shipCount++;
	};
	void printShipInfo() {
		cout << "Ship " << currentNum << " Coordindates: ";
		cord.putangle();
	};
};

int ship::shipCount = 1;

int main()
{
	ship s1(40, 50, 'E'),
		s2(30, 50, 'N'),
		s3(20, 10, 'S');

	cout << "Ship 1: ";
	s1.printShipInfo();
	cout << endl << "Ship 2: ";
	s2.printShipInfo();
	cout << endl << "Ship 3: ";
	s3.printShipInfo();
	cout << endl;

	system("PAUSE");
	return 0;
};