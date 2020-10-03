#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Сумма цифр в тексте
	string text = "Вторая Мировая война началась 1-го сентября 1939-го года."; // 23
	string Nums = "";
	int Sum = 0;

	for (int i = 0; i < text.size(); i++)
	{
		for (char j = 49; j <= 57; j++) // Диапазон цифровых обозначений char 1-9
		{
			if (int(text[i]) == j)
			{
				Sum += j - 48;
				Nums.push_back(text[i]);
			}
		}	
	}

	cout << Nums[0];

	for (int i = 1; i < Nums.size(); i++)
	{
		cout << " + " << Nums[i];
	}

	cout << " = " << Sum << endl;

	system("pause");
	return 0;
}
