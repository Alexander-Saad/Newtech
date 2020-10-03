#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int Num_1 = 10, Num_2 = 5; 

	Num_1 = Num_1 + Num_2;  
	Num_2 = Num_1 - Num_2; 
 	Num_1 = Num_1 - Num_2; 

	cout << "Num_1 = " << Num_1 << ", Num_2 = " << Num_2 << endl;
	
	system("pause");
	return 0;
}
