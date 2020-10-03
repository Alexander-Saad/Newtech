#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод значений от 10 до 100 с шагом 7

	int a = 10, b = 100;

	for (int i = a; i <= b; i+=7)
	{
		cout << i << " ";
	}

	system("pause");
	return 0;
}
