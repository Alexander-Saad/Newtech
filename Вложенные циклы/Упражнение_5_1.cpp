#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Сортировка методом "пузырька"
	int Arr[10] = {9,5,8,7,6,4,2,1,0,3};
	int counter;

	do
	{
		counter = 0; // Инициализация счетчика "нарушения порядка"

		for (int i = 1; i < size(Arr); i++)
		{
			if (Arr[i] < Arr[i - 1]) // Если последующий элемент меньше предыдущего, ...
			{
				Arr[i] = Arr[i] + Arr[i - 1]; // ... то меняем их местами
				Arr[i - 1] = Arr[i] - Arr[i - 1];
				Arr[i] = Arr[i] - Arr[i - 1];

				counter++; // Инкрементируем счетчик "нарушения порядка"
			}
		}
	} while (counter);

	for (int i = 0; i < size(Arr); i++) // Выводим отсортированный массив
	{
		cout << Arr[i] << ' ';
	}

	cout << '\n';

	system("pause");
	return 0;
}
