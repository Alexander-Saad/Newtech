#include <clocale>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num_1 = 0, Num_2 = 0;

	cout << "Введите два целых положительных числа: ";
	cin >> Num_1 >> Num_2;

	cout << "\nСумма: " << Num_1 + Num_2 << endl;
	cout << "Произведение: " << Num_1 * Num_2 << endl;
	cout << "Разность: " << Num_1 - Num_2 << endl;
	cout << "Частное: " << float (Num_1) / float (Num_2) << endl;

	
	system("pause");
	return 0;
}
