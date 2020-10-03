#include <clocale>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "*     *     *\n*   * *   *\n  * *   * *\n   *     *\n";
	
	system("pause");
	return 0;
}
