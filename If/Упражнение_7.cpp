#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num;

	cin >> Num;

	if (Num !=0)
	{
		(Num < 0) ? cout << pow (Num,2) << endl : cout << pow (Num,3) << endl;
	}
	else
	{
		cout << Num << endl;
	}

	system("pause");
	return 0;
}
