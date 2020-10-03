#include <clocale>
#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Определение положения точки на декартовой плоскости
	int x, y;

	cin >> x >> y;

	cout << "Точка (" << x << "," << y << ") находится ";

	if (x < 0)
	{
		(y < 0) ? cout << "в третьей четверти"<< endl : cout<<"";
		(y == 0) ? cout << "на границе второй и третьей четверти" << endl : cout << "";
		(y > 0) ? cout << "во второй четверти" << endl : cout << "";
	}
	if (x == 0)
	{
		(y < 0) ? cout << "на границе третьей и четвертой четверти" << endl : cout << "";
		(y == 0) ? cout << "в точке О" << endl : cout << "";
		(y > 0) ? cout << "на границе первой и второй четверти" << endl : cout << "";
	}
	if (x > 0)
	{
		(y < 0) ? cout << "в четвертой четверти" << endl : cout << "";
		(y == 0) ? cout << "на границе первой и четвертой четверти" << endl : cout << "";
		(y > 0) ? cout << "в первой четверти" << endl : cout << "";
	}

	system("pause");
	return 0;
}
