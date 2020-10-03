#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Выделение дробной части вещественного числа
	double x = 125.26556;

	cout << "Дробная часть: " << x - int(x) << endl;

	system("pause");
	return 0;
}
