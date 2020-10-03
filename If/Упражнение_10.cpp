#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение века по году
	int Year = 1905, Century;

	(Year % 100 == 0) ? Century = Year / 100 : Century = Year / 100 + 1;
	
	cout << "Это " << Century <<"-й век" << endl;

	system("pause");
	return 0;
}
