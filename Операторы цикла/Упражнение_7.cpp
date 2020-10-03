#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n = 20;
	long long int fact = 1;
	double sum = 2;

	for (int i = 2; i <= n; i++)
	{
		fact *= i;
		cout << i << " = " << fact << endl;
		sum += 1.0 / fact;
	}
	cout << endl << sum << endl;

	system("pause");
	return 0;
}
