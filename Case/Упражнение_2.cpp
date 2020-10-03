#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение дней в месяце
	int Month;

	cin >> Month;

	switch (Month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31 день" << endl;
			break;
		case 4: case 6: case 9: case 11: cout << "30 дней" << endl;
			break;
		case 2: cout << "28 дней" << endl;
	
	default: cout << "Неизвестный месяц!" << endl;
		break;
	}

	system("pause");
	return 0;
}
