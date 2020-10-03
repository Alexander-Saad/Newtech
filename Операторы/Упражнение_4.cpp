#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = -2;

	cout << "|x| + x^5 = " << abs(x) + pow(x ,5) << endl;
	
	system("pause");
	return 0;
}
