#include <iostream>
using namespace std;

class sample_class
{
	private:
		static int count;
	public:
		sample_class()
		{
			count++;
		}
		void putcount()
		{
			cout << count << endl;
		}
};

int sample_class::count = 0;

int main()
{
	sample_class obj1;
	obj1.putcount();
	sample_class obj2;
	obj2.putcount();

	system("PAUSE");
    return 0;
}

