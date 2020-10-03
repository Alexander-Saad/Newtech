#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение полных минут и часов в секундах
	int T_sec = 5869; // Время, выраженное в секундах

	cout << "Часов = " << T_sec / 3600 << endl;
	cout << "Минут = " << T_sec % 3600 / 60 << endl;
	cout << "Секунд = " << T_sec % 60 << endl;
	
	system("pause");
	return 0;
}
