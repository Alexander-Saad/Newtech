#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Сортировка методом прямого выбора
	int Arr[10] = {9,5,1,7,2,4,2,1,0,2};
	int Min, position = 0;

	for (int i = 0; i < size(Arr); i++)
	{
		Min = Arr[i];

		for (int j = i; j < size(Arr); j++) // Находим минимальный элемент в неотсортированной части массива.
		{
			if (Arr[j] < Min)
			{
				Min = Arr[j]; // Присваиваем переменной Min минимальный элемент.
				position = j;
			} 
		}

		if (Arr[i] > Min) // Если текущий элемент менее минимального найденного, ...
		{
			Arr[position] += Arr[i]; // то меняем их местами.
			Arr[i] = Arr[position] - Arr[i];
			Arr[position] -= Arr[i];
		}
	}

	for (int i = 0; i < size(Arr); i++) // Выводим отсортированный массив.
		cout << Arr[i] << ' ';

	cout << '\n';

	system("pause");
	return 0;
}
