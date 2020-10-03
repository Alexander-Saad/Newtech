#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Перевод единиц длины в метры
	double L;
	int unit;

	cin >> unit >> L;

	switch (unit)
	{
		case 1: cout << L << " dm = " << L / 10 <<" m" << endl;
			break;
		case 2: cout << L << " km = " << L * 1000 << " m" << endl;
			break;
		case 3: cout << L << " m = " << L << " m" << endl;
			break;
		case 4: cout << L << " mm = " << L / 1000 << " m" << endl;
			break;
		case 5: cout << L << " cm = " << L / 100 << " m" << endl;
			break;
	
	default: cout << "Неизвестная единица измерения!" << endl;
		break;
	}

	system("pause");
	return 0;
}
