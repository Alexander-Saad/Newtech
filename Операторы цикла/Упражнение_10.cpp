#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Подсчет числа максимальных цифр в числе

	int num = 132433, Max = 0, count = 0;
	vector<int> nums;

	// Заполнение вектора цифрами из числа и поиск максимального значения
	nums.push_back(num % 10);
	
	while ((num /= 10) > 0) // Пока число делится на 10
	{
		nums.push_back(num % 10); // Дополнить вектор правой цифрой
		
		if (num % 10 > Max) // Поиск максимальной цифры
			Max = num % 10;
	}

	// Подсчет количества вхождений максимальной цифры
	for (int i = 0; i < nums.size(); i++)
		nums[i] == Max ? count++ : 0;
	
	// Результат
	cout << "Максимальная цифра " << Max << " встречается " << count << " раз(а)." << endl;

	system("pause");
	return 0;
}
