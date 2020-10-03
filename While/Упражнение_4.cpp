#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num = 1000;

	while (Num < 10000)
	{
		if (Num % 133 == 125 || Num % 134 == 111)
		{
			cout << Num << ' ';
		}

		Num++;
	}

	cout << '\n';

	system("pause");
	return 0;
}
