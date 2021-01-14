#include <iostream>
#include <conio.h>
#include "windows.h"
#include "ctime"
using namespace std;

bool gameOver;
const int width = 30;  // ширина ігрового поля
const int height = 20;   //висота ігрового поля
int x, y, fruitX, fruitY, score;   //координати x i y (i для фрукту теж), рахунок
int tailX[100], tailY[100];        //для хвосту змії
int kTail;  //це для запису довжини хвоста змії наприклад якщо вона з'їла 5 фруктів то в неї буде хвіст з 5 плюсиків
int speed = 2; //це швидкість гри по замовчуванню стоїть середня

//додатково
char snakeHead = '#';
char snakeBody = '+';
char fruit = '$';
char borders = '&';

//перечислення
enum Move {
	STOP = 0,
	LEFT,
	UP,
	RIGHT,
	DOWN
};

Move mov;

void startSettings();
void draw();
void input();
void logic();

int main() {

	srand(time(nullptr));

	bool replay = true;
	do {
		int choose;
		cout << "\tGame Sname\n";
		cout << "1 - Start Game\n";
		cout << "2 - Game mode(speed)\n";
		cout << "3 - Setting(design)\n";
		cout << "4 - Exit\n";
		cout << "Answer: ";
		cin >> choose;

		switch (choose)
		{
		case 1:

			startSettings();
			while (gameOver == false)
			{
				draw();
				input();
				logic();
			}

			break;
		case 2:
			cout << "\tSpeed\n";
			cout << "1 - slowly\n";
			cout << "2 - normal\n";
			cout << "3 - quickly\n";
			cout << "4 - exit\n";
			cout << "Answer: ";
			cin >> speed;

			//перевірка умови якщо некоректна то переставляємо на стандарт
			if (speed < 0 || speed>4)
			{
				speed = 2;
			}
			break;
		case 3:
			cout << "\tDesign\n";
			cout << "1 - borders\n";
			cout << "2 - snake head\n";
			cout << "3 - snake body\n";
			cout << "4 - fruit\n";
			cout << "5 - exit\n";
			cout << "Answer: ";
			cin >> choose;
			break;
		case 4:
			replay = false;
			break;
		default:
			cout << "Inccorect direction!\n";
			break;
		}
	} while (replay);

	return 0;
}

void startSettings()
{
	gameOver = false;
	mov = STOP;

	//задаємо кординати змійці (хай початково буде в центрі)
	x = width / 2 - 1;
	y = height / 2 - 1;

	//задаємо рандомні кординати фрукту (хай початково буде в центрі)
	fruitX = rand() % width;   // щоб не виходило за рамки(по ширині)
	fruitY = rand() % height;   // щоб не виходило за рамки(по висоті)

	score = 0;   // щоб рахунок був рівний нулю на початку гри
}

void draw()
{
	system("cls");  // очищаємо екран

	//промальовуємо верхню границю;
	for (int i = 0; i < width + 1; i++)
	{
		cout << borders;
	}
	cout << endl;

	//промальовуємо бокові границі;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				cout << borders;
			}
			if (j == x && i == y)
			{
				cout << "#";
			}
			else if (i == fruitY && j == fruitX)
			{
				cout << "$";
			}
			else
			{
				//для виводу хвоста

				bool print = false;

				for (int k = 0; k < kTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						print = true;
						cout << "+";
					}
				}
				if (print == false)
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	//промальовуємо нижню границю;
	for (int i = 0; i < width + 1; i++)
	{
		cout << borders;
	}
	cout << endl;

	cout << " Your score: " << score << endl;   //виводимо рахунок

	if (speed == 2)
	{
		Sleep(100); // ждать 0.1 секунд, время эта функция считает в тысячных долях секунды
	}
	else if (speed == 1)
	{
		Sleep(500); // ждать 0.5 секунд, время эта функция считает в тысячных долях секунды
	}
	else
	{
		Sleep(10); // ждать 0.01 секунд, время эта функция считает в тысячных долях секунды
	}
}

void input()
{
	if (_kbhit())   // перевіряє на яку кнопку нажав користувач
	{
		switch (_getch())  // на що він натиснув(щоб змійка рухалася залежно куди хоче користувач)
		{
		case 'a':
			mov = LEFT;
			break;
		case 'd':
			mov = RIGHT;
			break;
		case 'w':
			mov = UP;
			break;
		case 's':
			mov = DOWN;
			break;
		case 'z':
			gameOver = true;
			break;
		}
	}
}

void logic()
{
	//хвіст змії і
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;  // просто "тимчасові перемінні"

	//ставимо частинку хвоста там де буде змійка 
	tailX[0] = x;
	tailY[0] = y;

	//для зміщення щоб хвіст був після змійки і йшов за нею
	for (int i = 1; i < kTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];

		tailX[i] = prevX;
		tailY[i] = prevY;

		prevX = prev2X;
		prevY = prev2Y;
	}

	//викрнуємо дію яку користувач ввів 
	switch (mov)
	{
	case LEFT:
		x--;
		break;
	case UP:
		y--;
		break;
	case RIGHT:
		x++;
		break;
	case DOWN:
		y++;
		break;
	}

	//якщо змійка виходить за межі поля(по ширині) 
	if (x >= width - 1)
	{
		x = 0;
	}
	else if (x < 0)
	{
		x = width - 2;
	}

	//якщо змійка виходить за межі поля(по висоті) 
	if (y >= height)
	{
		y = 0;
	}
	else if (y < 0)
	{
		y = height - 1;
	}

	for (int i = 0; i < kTail; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
		{
			gameOver = true;
		}
	}

	//щоб користувач міг збирати фрукти(гроші(якісь предмети не важливо що)) і збільшувати за це свій рахунок
	if (x == fruitX && y == fruitY)
	{
		score += 5;
		fruitX = rand() % width;
		fruitY = rand() % height;
		kTail++;  //збільшуємо хвіст змії
	}
}