#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/// Определение принадлежности диапазону (-5; 3)
	int Num;
	bool Result;

	cin >> Num;

	(Num > -5 && Num < 3) ? Result = true : Result = false;
			
	cout << Result << endl;

	system("pause");
	return 0;
}
