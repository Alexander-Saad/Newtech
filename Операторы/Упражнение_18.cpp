#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/// Определение расстояния до столба
	int x = 5, n = 3, y = 6;

	cout << "n-ный столб на расстоянии: " << (n - 1) * y + x << endl;

	system("pause");
	return 0;
}
