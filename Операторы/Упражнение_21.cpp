#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/// Округление числа до сотых
	double x = 125.26456;

	cout << "Округленное число: " << int(x * 100) / 100.0 << endl;

	system("pause");
	return 0;
}
