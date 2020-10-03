#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение времени года по месяцу
	int Month;

	cin >> Month;

	switch (Month)
	{
		case 12: case 1: case 2: cout << "Зима" << endl;
			break;
		case 3: case 4: case 5: cout << "Весна" << endl;
			break;
		case 6: case 7: case 8: cout << "Лето" << endl;
			break;
		case 9: case 10: case 11: cout << "Осень" << endl;
			break;
	
	default: cout << "Неизвестный месяц!" << endl;
		break;
	}

	system("pause");
	return 0;
}
