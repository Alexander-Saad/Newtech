#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = 1.7;

	cout << "(x + 1)^2 + 3(x + 1) = x^2 + 5x + 4 = " << endl;
	cout << pow(x, 2) + 5 * x + 4 << " (при x = " << x <<")" << endl;
	x = 3;
	cout << pow(x, 2) + 5 * x + 4 << " (при x = " << x << ")" << endl;
	
	system("pause");
	return 0;
}
