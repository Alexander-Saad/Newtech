#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num = 5000;

	while (Num % 39 != 0) Num--;
	
	cout << Num <<'\n';

	system("pause");
	return 0;
}
