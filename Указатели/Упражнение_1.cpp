#include<iostream>
#include<Windows.h>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Инверсия одномерного массива
	int ArrSize, temp;
	
	cin >> ArrSize; // Указание размерности массива
	
	int *Arr = new int[ArrSize]; // Выделение памяти под массив

	for (int* i = Arr; i < Arr + ArrSize; i++) // Пока адрес в указателе < адреса 1-го элемента массива + размер массива
	{
		*i = rand() % 100; // Присвоить рандомное значение в область памяти, на которую указывает указатель
		cout << *i << ' '; // Вывести разыменованный указатель (значение в памяти)
	}

	cout << '\n';

	for (int* i = Arr, *j = Arr + ArrSize - 1; i <= j; i++, j--) // i - указатель на адрес первого элемента массива, 
		//j - указатель на адрес последнего элемента массива. Пока адреса i и j не сравнялись..
	{
		temp = *i; // ... значения по этим адресам меняются местам
		*i = *j;
		*j = temp;
	}

	for (int* i = Arr; i < Arr + ArrSize; i++) // Вывод инвертированного массива
	{
		cout << *i << ' ';
	}

	cout << '\n';

	system("pause");
	return 0;
}