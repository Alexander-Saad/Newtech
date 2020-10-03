#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Примитивный калькулятор
	double a, b;
	int Action;

	cin >> a >> Action >> b;

	switch (Action)
	{
		case 1:  cout << a << " + " << b << " = "<< a + b << endl;
			break;
		case 2:  cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3: cout << a << " * " << b << " = " << a * b << endl; 
			break;
		case 4: if (b == 0) { cout << "Ошибка: деление на 0!" << endl; }
				else { cout << a << " / " << b << " = " << a / b << endl; }
				break;
	
	default: cout << "Неизвестное действие!" << endl;
		break;
	}

	system("pause");
	return 0;
}
