#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Максимальное количество кусков бревна
	int L = 17, x = 4;

	cout << "Кол-во кусков: " << L / x << endl;

	system("pause");
	return 0;
}
