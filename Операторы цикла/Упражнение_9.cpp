#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Инверсия минимального и максимального элементов массива
	vector<int> nums = { 1,2,3,4,5,45,21,11,-5,19 };
	int Min = nums[0], Max = nums[0], i_Max = 0, i_Min = 0;

	// Вывод исходного массива
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i]<<" ";
	}
	cout << endl;

	// Поиск мин и макс элемента
	for (int i = 0; i < nums.size(); i++) 
	{
		if (nums[i] > Max)
		{
			Max = nums[i];
			i_Max = i;
		}

		if (nums[i] < Min)
		{
			Min = nums[i];
			i_Min = i;
		}
	}

	// Перестановка местами мин и макс элементов 
	nums[i_Max] += nums[i_Min];
	nums[i_Min] = nums[i_Max] - nums[i_Min];
	nums[i_Max] -= nums[i_Min];

	// Вывод измененного массива
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
