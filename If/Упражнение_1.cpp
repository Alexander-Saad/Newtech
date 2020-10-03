#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение максимального числа из трёх
	int N1, N2, N3, N_max;

	cin >> N1 >> N2 >> N3;

	N_max = N1;

	(N2 > N_max) ? N_max = N2 : 0;
	(N3 > N_max) ? N_max = N3 : 0;
		
	cout << "N_max = " << N_max << endl;

	system("pause");
	return 0;
}
