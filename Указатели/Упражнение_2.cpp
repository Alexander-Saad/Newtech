#include<iostream>
#include<Windows.h>
#include<clocale>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Удаление дубликатов из массива
	vector <int> Arr { 8,5,4,7,8,9,6,5,2,3,5,1,2,4,7,8,9,6 };
	
	sort(Arr.begin(), Arr.end()); // Сортировка

	auto last = unique(Arr.begin(), Arr.end()); // Похоже, что эта функция указывает на память
						    //с повторяющимися значениями
	Arr.erase(last, Arr.end());

	for (int i : Arr)
	{
		cout << i << ' ';
	}

	cout << '\n';

	system("pause");
	return 0;
}