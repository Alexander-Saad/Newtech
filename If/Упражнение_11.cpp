#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение дней в году
	int Year;

	cin >> Year;

	if (Year % 4 == 0 && !(Year % 100 == 0 && Year % 400 != 0))
	{
		cout << "Данный год - високосный (366 дней)" << endl;
	}
	else
	{
		cout << "Данный год - не високосный (365 дней)" << endl;
	}

	system("pause");
	return 0;
}
