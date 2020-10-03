#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод стоимости единиц товара

	double price = 20.4;

	for (int i = 1; i <= 20; i ++)
	{
		cout << i << " шт. = " << i * price << endl;
	}

	system("pause");
	return 0;
}
