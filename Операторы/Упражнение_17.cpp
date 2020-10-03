#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение подъезда и этажа для n-ной квартиры
	int N_flat, block, stage;

	cin >> N_flat;
	block = ceil(N_flat / 36.0);
	cout << "Подъезд № " << block << endl;

	if (N_flat % 36 == 0)
	{
		stage = 9;
	}
	else 
		stage = ceil((N_flat % 36) / 4.0);
	cout << "Этаж № " << stage << endl;

	system("pause");
	return 0;
}
