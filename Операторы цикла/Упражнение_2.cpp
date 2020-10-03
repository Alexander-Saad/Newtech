#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод нечетных значение от 1 до 20

	int a = 1, b = 20;

	for (int i = a; i <= b; i+=2)
	{
		cout << i << " ";
	}

	system("pause");
	return 0;
}
