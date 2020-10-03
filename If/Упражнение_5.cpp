#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num, a;
	
	cout << "Введите любое двузначное число: " << endl;
	cin >> Num;

	if (Num >= 10 && Num <= 99)
	{
		(Num / 10 == 3 || Num % 10 == 3) ? cout << "Цифра 3 входит в число " << Num << endl
			: cout << "Цифра 3 не входит в число " << Num << endl;
	}
	else
	{
		cout << "Вы ввели НЕ ДВУЗНАЧНОЕ число!" << endl;
		system("pause");
		exit(0);
	}
	
	cout << "Введите одну цифру: " << endl;
	cin >> a;

	if (a >= 0 && a <= 9)
	{
		(Num / 10 == a || Num % 10 == a) ? cout << "Цифра " << a << " входит в число " << Num << endl
			: cout << "Цифра " << a << " не входит в число " << Num << endl;
	}
	else
	{
		cout << "Вы ввели цифру вне предела от 0 до 9." << endl;
		system("pause");
		exit(0);
	}

	system("pause");
	return 0;
}
