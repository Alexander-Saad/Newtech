#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdio>  

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/// Удаление лишних пробелов из строки ///
	char Str_1[80]{};
	char Str_2[80]{};

	char* p = Str_1, * q = Str_2; // Выставление указателей на начало массивов
	int ltrs = 0, ltr = 0; // Счётчик символов (кроме пробелов) и счетчик текущего символа (!= ' ')
	
	cin.getline(Str_1, 80);

	for (p; *p; p++) // Подсчет количества значимых символов
	{
		if (*p != ' ') ltrs++;
	}

	/// Удаление пробелов из начала строки
	p = Str_1; // Установка указателя в начало исходной строки

	while (*p == ' ') // Начиная с начала строки, инкрементировать указатель, пока символ == ' '
		p++;
	
	// Удаление лишних пробелов в средине и в конце строки
	for (p, q; *p; p++, q++)
	{
		while (*p == ' ' && *(p - 1) == ' ') // Пока рядом стоят два пробела...
			p++; // ... просто "сдвигать" указатель
		
		if (*p != ' ') ltr++; // Если символ не ' ', то счетчик++
		
		*q = *p;
		
		if (ltr == ltrs) break;  // Если закончились значащие символы, то выйти
	}

	cout << Str_1 << endl;
	cout << Str_2 << endl;

	system("pause");
	return 0;
}