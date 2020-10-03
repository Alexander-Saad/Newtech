#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Печать текста "столбиком"

	string Name = "Juventus";
	
	for (int i = 0; i < Name.size(); i++)
		cout << Name[i] << endl;

	system("pause");
	return 0;
}
