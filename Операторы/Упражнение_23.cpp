#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Первая цифра числа
	int n = 5487;

	cout << "Первая цифра: " << n / 1000 << endl;

	system("pause");
	return 0;
}
