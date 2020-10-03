#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Вывод чисел от a до b

	int a, b, cnt = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++, cnt++)
	{
		cout << i << " ";
	}
	cout<< endl<< cnt << endl;

	system("pause");
	return 0;
}
