#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	
	// Печать нечетных букв

	string s1 = "Juventus";

	for (int i = 0; i< s1.size(); i+=2)
		cout << s1[i];

	cout << endl;

	system("pause");
	return 0;
}
