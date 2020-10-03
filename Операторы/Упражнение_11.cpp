#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num = 467; 

	cout << (Num / 100) * (Num % 100 / 10) * (Num % 10) << endl;
	
	system("pause");
	return 0;
}
