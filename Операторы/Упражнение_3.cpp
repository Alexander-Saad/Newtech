#include <clocale>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a = 2, b = 3;

	cout << "(a + 4b)(a - 3b) + a^2 = 2a^2 + ab - 12b^2 = " << 2 * pow(a,2) + a*b - 12 * pow(b,2) << endl;
	
	system("pause");
	return 0;
}
