#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<int> nums = {1,2,3,4,5,45,21,11};
	double sum = 0, avg = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
	}

	avg = sum / nums.size();

	cout << avg << endl;


	system("pause");
	return 0;
}
