#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	
	// Печать текста задом наперед

	string Name = "Juventus";

	for (int i = Name.size()-1; i >= 0; i--)
		cout << Name[i];

	cout << endl;

	system("pause");
	return 0;
}
