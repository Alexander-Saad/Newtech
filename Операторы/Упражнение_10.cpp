#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num = 467;

	Num = Num / 100 * 100 + Num % 10;

	cout << Num << endl;
	
	system("pause");
	return 0;
}
