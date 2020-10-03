#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Notes[] = {5,5,5,5,5,4,2,1,3,3,2,4,2,3,2,1,3};
	int i=0;

	while (Notes[i] == 5) i++;
	
	cout << i<<'\n';

	system("pause");
	return 0;
}
