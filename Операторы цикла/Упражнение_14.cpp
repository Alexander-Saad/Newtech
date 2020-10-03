#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Сколько раз встречаются буквы, идущие подряд

	string text = "Каждый охотник непременно и несомненно желает знать где сидит фазан.";
	int counter = 0;
	
	for (int i = 1; i < text.size(); i++)
	{
		text[i] == text[i-1] ? counter++ : 0;
	}
		
	cout << counter << endl;

	system("pause");
	return 0;
}
