#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			{if (i < 4) cout << 5 << ' ';} // Вывод 1-й таблицы
		
		if (i<4) cout << '\t';
	
		for (int j = 1; j <= 10; j++)
			{if (i < 4) cout << j << ' ';}  // Вывод 2-й таблицы

		if (i < 4) cout << '\t';

		for (int j = 1; j <= 10; j++)
			{if (i < 4) cout << i * 10 + 40 + j << ' ';}  // Вывод 3-й таблицы

		if (i < 4) cout << '\t';
		else cout << "\t\t\t\t\t\t\t\t\t";

		for (int j = 0; j <= i; j++)
			{cout << 5 << ' ';} // Вывод 4-й таблицы

		if (i < 3)	cout << "\t\t";
		else cout << '\t';

		for (int j = i; j >=0; j--)
			{cout << j << ' ';} // Вывод 5-й таблицы

		if (i < 3)	cout << "\t\t";
		else cout << '\t';

		for (int j = 0; j <= 4 - i; j++)
			{cout << 20 - i + j << ' ';} // Вывод 6-й таблицы 

		cout << '\n';
	}

	system("pause");
	return 0;
}
