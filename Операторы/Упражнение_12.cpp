#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод n-нного четного числа
	int N_even = 5; 

	cout << N_even*2 << endl;
	
	system("pause");
	return 0;
}
