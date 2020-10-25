#include<iostream>
#include<Windows.h>
#include<cstdio> 
#include<conio.h>

using namespace std;

bool GameOver;
const int width = 20, heigth = 20;
int x, y, TargetX, TargetY, score, TailLength;
int TailX[100], TailY[100];

// Варианты управления.
enum Controls 
{
	STOP = 0,
	UP,
	DOWN,
	LEFT,
	RIGHT
};

Controls dir;

// Инициализация начала игры.
void Initialisation() 
{
	GameOver = false;
	dir = STOP;
	
	// Начальная позиция змеи.
	x = width / 2 - 1;
	y = heigth / 2 - 1;

	// Начальная позиция цели.
	TargetX = rand() % (width - 1);
	TargetY = rand() % (heigth - 1);

	score = 0;
}

// Устранение мерцания консоли.
void setcur(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	Sleep(50);
}

// Графика игры.
void Draw()
{
	setcur(0, 0);
	
	// Верхняя граница поля.
	for (int i = 0; i <= width; i++) 
	{	
		if (i == 0)
			cout << u8"\u2554"; // Левый угол.
		else if (i == width)
			cout << u8"\u2557"; // Правый угол.
		else
			cout << u8"\u2550"; // Потолок.
	}
	cout << endl;

	// Боковые границы и игровое поле.
	for (int i = 0; i < heigth; i++) // Отрисовка боковых границ и игрового поля.
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
				cout << u8"\u2551"; // Боковая граница.
			if (i == x && j == y)
			{
				// Символ головы при разных направлениях.
				switch (dir)
				{
					case STOP: case UP: cout << u8"\u25b2"; // Голова направлена вверх.
						break; 
					case DOWN: cout << u8"\u25bc"; // Голова направлена вниз.
						break;
					case LEFT: cout << u8"\u25c4"; // Голова направлена влево.
						break;
					case RIGHT: cout << u8"\u25ba"; // Голова направлена вправо.
						break;
				}
			}

			else if (i == TargetX && j == TargetY)
				cout << u8"\u2665"; // Символ мишени.
			else 
			{
				bool print = false;

				for (int k = 0; k < TailLength; k++)
				{
					if (TailX[k] == i && TailY[k] == j)
					{
						print = true;
						cout << u8"\u25cf";
					}
				}

				if(!print)
					cout << " ";
			}
		}
		cout << endl;
	}

	// Нижняя граница поля.
	for (int i = 0; i <= width; i++)
	{
		if (i == 0)
			cout << u8"\u255a"; // Левый угол.
		else if (i == width)
			cout << u8"\u255d"; // Правый угол.
		else
			cout << u8"\u2550"; // Пол.
	}

	cout << endl;
	cout << "Scores: " << score << " ";
	cout << "X: " << x << " " << "Y: " << y;
}

// Действия пользователя.
void Input() 
{
	if (_kbhit())
	{
		switch (_getch())
		{
			case 'w': dir = UP;
				break;
			case 's': dir = DOWN;
				break;
			case 'a': dir = LEFT;
				break;
			case 'd': dir = RIGHT;
				break;
			case 'x': GameOver = true;
				break;
		}
	}
}


void Action() // Содержит логику игры.
{
	int prevX = TailX[0];
	int prevY = TailY[0];
	int prev2X, prev2Y;
	TailX[0] = x;
	TailY[0] = y;

	for (int i = 1; i < TailLength; i++)
	{
		prev2X = TailX[i];
		prev2Y = TailY[i];
		TailX[i] = prevX;
		TailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	switch (dir) // Перемещение змейки
	{
		case UP: x--;
			break;
		case DOWN: x++;
			break;
		case LEFT: y--;
			break;
		case RIGHT: y++;
			break;
	}

	if (x < 0) // При встрече со стеной
		x = width - 1;
	else if (x >= width)
		x = 0;

	if (y < 0)
		y = heigth - 2;
	else if (y >= heigth-1)
		y = 0;

	for (int i = 0; i < TailLength; i++) // Проверка на пересечение с хвостом
	{
		if (TailX[i] == x && TailY[i] == y)
			GameOver = true;
	}

	if (x == TargetX && y == TargetY)
	{
		score++;
		TargetX = rand() % (width-1);
		TargetY = rand() % (heigth-1);
		TailLength++;
	}
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Initialisation();

	while (!GameOver)
	{
		Draw();
		Input();
		Action();
	}
	cout << endl;

	system("pause");
	return 0;
}