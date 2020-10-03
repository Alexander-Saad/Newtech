#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Последняя цифра числа
	int n = 5487;

	cout << "Последняя цифра: " << n % 10 << endl;

	system("pause");
	return 0;
}
