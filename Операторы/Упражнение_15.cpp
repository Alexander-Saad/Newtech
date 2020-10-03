#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение нечётных чисел на отрезке a, b
	int a, b;
	int Nums; // Общее кол-во чисел на отрезке

	// a = even, b = even
	a = 6;
	b = 16;
	Nums = abs(a - b) + 1;

	cout << (Nums - 1) / 2 << endl;

	// a = odd, b = odd
	a = 5;
	b = 17;
	Nums = abs(a - b) + 1;

	cout << (Nums + 1) / 2 << endl;

	// a = even, b = odd
	a = 4;
	b = 19;
	Nums = abs(a - b) + 1;

	cout << Nums / 2 << endl;
	
	system("pause");
	return 0;
}
