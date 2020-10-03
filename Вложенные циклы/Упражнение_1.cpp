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
	int Num = 100, flag;

	while (Num < 1000)
	{
		flag = 0; // Сброс счетчика делений нацело

		for (int i = 2; i < Num; i++)
		{
			if (Num % i == 0) // Инкремент счетчика, если число делится нацело
				flag++;
		}

		if (flag == 0) // Вывод простого числа (если не нашлось делителей)
			cout << Num << ' ';

		Num++;
	}

	cout << '\n';

	system("pause");
	return 0;
}
