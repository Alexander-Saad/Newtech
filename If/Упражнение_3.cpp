#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение условий a < b < c и b > a > c
	double a, b, c;
	bool Result_cba, Result_bac;

	cin >> a >> b >> c;

	(c > b && b > a) ? Result_cba = true : Result_cba = false;
	(b > a && a > c) ? Result_bac = true : Result_bac = false;
			
	cout << "Условие a < b < c = " << Result_cba << endl;
	cout << "Условие b > a > c = " << Result_bac << endl;

	system("pause");
	return 0;
}
