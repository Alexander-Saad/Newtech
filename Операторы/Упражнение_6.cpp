#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = -2.34;

	cout << "(abs(x - 5) - sin(x)) / 3 + sqrt(pow(x,2) + 2014) * cos(2*x) - 3 = " \
		<< (abs(x - 5) - sin(x)) / 3 + sqrt(pow(x, 2) + 2014) * cos(2 * x) - 3 << endl;
	
	system("pause");
	return 0;
}
