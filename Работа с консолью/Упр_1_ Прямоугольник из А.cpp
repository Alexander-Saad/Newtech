#include <clocale>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "AAAAAAAA\nAAAAAAAA\nAAAAAAAA\nAAAAAAAA\nAAAAAAAA\n";
	
	system("pause");
	return 0;
}
