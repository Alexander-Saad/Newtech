#include<iostream>
#include<Windows.h>
#include<clocale>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Слияние двух массивов
	vector <int> Arr_1 {8,5,4,7,8,9,6,5,2,3,5,1,2,4,7,8,9,6};
	vector <int> Arr_2 {5,4,4,2,2,6,7,9,7,6,5,4,6,5,2,1,4,5,6};
	vector <int> Arr_3;

	sort(Arr_1.begin(), Arr_1.end());
	sort(Arr_2.begin(), Arr_2.end());
	
	merge(Arr_1.begin(), Arr_1.end(), Arr_2.begin(), Arr_2.end(), back_inserter(Arr_3));

	sort(Arr_3.begin(), Arr_3.end());

	for (int i : Arr_3)
	{
		cout << i << ' ';
	}

	cout << '\n';

	system("pause");
	return 0;
}