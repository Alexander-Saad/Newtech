#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Количество квадратов = " << (647 * 170) / (30 * 30) << endl;
	
	system("pause");
	return 0;
}
