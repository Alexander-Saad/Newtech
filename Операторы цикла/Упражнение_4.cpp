#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод значений от 1.5 до 10.3 с шагом 0.4

	double a = 1.5, b = 10.3;

	for (double i = a; i <= b; i += 0.4)
	{
		cout << i << " ";
	}

	system("pause");
	return 0;
}
