#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Упорядочивание трёх чисел по возрастанию
	int x = 3, y = 1, z = 2;

	if (z < x)
	{
		z = z + x;
		x = z - x;
		z = z - x;
	}
	if (z < y)
	{
		z = z + y;
		y = z - y; 
		z = z - y;
	}
	if (y < x)
	{
		y = y + x;
		x = y - x;
		y = y - x;
	}
	
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

	system("pause");
	return 0;
}
