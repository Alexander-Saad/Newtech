#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Sum = 0;

	for (int i = 50; i <= 70; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				Sum += j;
			}
		}
	}

	cout << Sum << '\n';

	system("pause");
	return 0;
}
