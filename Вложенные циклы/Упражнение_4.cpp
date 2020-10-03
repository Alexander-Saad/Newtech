#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << j << " x " << i << " = " << j * i << '\t';
		}
		cout << '\n';
	}

	cout << '\n';

	system("pause");
	return 0;
}
