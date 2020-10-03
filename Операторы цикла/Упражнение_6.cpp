#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Таблица умножения на 7

	for (int i = 1; i <= 10; i ++)
	{
		cout << "7 x " << i << " = " << 7 * i << endl;
	}

	system("pause");
	return 0;
}
