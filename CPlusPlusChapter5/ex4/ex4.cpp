// ex4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

Distance biggerDist(Distance& dist1, Distance& dist2);

struct Distance
{
	int futs;
	int inches;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Distance
		dist1 = { 12, 4 },
		dist2 = { 12, 5 };

	dist2 = biggerDist(dist1, dist2);
	cout << dist2.futs << dist2.inches << endl;

	system("PAUSE");
    return 0;
}

Distance biggerDist(Distance& dist1, Distance& dist2)
{

	if (dist1.futs + dist1.inches / 12.0f > dist2.futs + dist2.inches / 12.0f)
		return dist1;
	else
		return dist2;
}