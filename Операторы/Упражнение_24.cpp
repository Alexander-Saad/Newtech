#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/// Остаток от деления
	int N = 7, div = 4; // div - "divider" делитель

	cout << "Остаток от деления: " << N - div * (N / div) << endl;

	system("pause");
	return 0;
}
