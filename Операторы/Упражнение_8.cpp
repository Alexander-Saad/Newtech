#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Ответ = " << 237 % 100 * 10 + 237 / 100 << endl;
	
	system("pause");
	return 0;
}
