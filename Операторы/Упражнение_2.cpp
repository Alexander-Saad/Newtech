#include <clocale>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "1/2 + 1/4 = " << 1.0 / 2 + 1.0 / 4 << endl;
	
	system("pause");
	return 0;
}
