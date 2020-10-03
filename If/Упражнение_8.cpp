#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int x = 8, y = 4;

	if (x > y)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}

	cout << "x = " << x << ", y = " << y << endl;

	system("pause");
	return 0;
}
