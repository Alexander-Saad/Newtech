#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение пройденных столбов по шагам
	int x = 5, n = 9, z = 2, y = 6;

	cout << "Пройдено столбов: " << n * z / (x + y) + 1 << endl;

	system("pause");
	return 0;
}
