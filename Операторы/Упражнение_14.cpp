#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Число человек между i-тым и k-тым членом очереди
	int i = 3, k = 10; 

	cout << abs(i - k) - 1 << endl; //Только зачем в условии кол-во человек?
	
	system("pause");
	return 0;
}
