#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод n-нного нечетного числа
	int N_odd = 7; 

	cout << N_odd * 2 - 1 << endl;
	
	system("pause");
	return 0;
}
