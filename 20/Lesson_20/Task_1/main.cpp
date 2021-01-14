#include <iostream>
#include <conio.h>
#include "windows.h"
#include "ctime"
using namespace std;

bool gameOver;
const int width = 30;  // ������ �������� ����
const int height = 20;   //������ �������� ����
int x, y, fruitX, fruitY, score;   //���������� x i y (i ��� ������ ���), �������
int tailX[100], tailY[100];        //��� ������ �쳿
int kTail;  //�� ��� ������ ������� ������ �쳿 ��������� ���� ���� �'��� 5 ������ �� � �� ���� ���� � 5 �������
int speed = 2; //�� �������� ��� �� ������������ ����� �������

//���������
char snakeHead = '#';
char snakeBody = '+';
char fruit = '$';
char borders = '&';

//������������
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

			//�������� ����� ���� ���������� �� ������������� �� ��������
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

	//������ ��������� ����� (��� ��������� ���� � �����)
	x = width / 2 - 1;
	y = height / 2 - 1;

	//������ ������� ��������� ������ (��� ��������� ���� � �����)
	fruitX = rand() % width;   // ��� �� �������� �� �����(�� �����)
	fruitY = rand() % height;   // ��� �� �������� �� �����(�� �����)

	score = 0;   // ��� ������� ��� ����� ���� �� ������� ���
}

void draw()
{
	system("cls");  // ������� �����

	//������������ ������ �������;
	for (int i = 0; i < width + 1; i++)
	{
		cout << borders;
	}
	cout << endl;

	//������������ ����� �������;
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
				//��� ������ ������

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

	//������������ ����� �������;
	for (int i = 0; i < width + 1; i++)
	{
		cout << borders;
	}
	cout << endl;

	cout << " Your score: " << score << endl;   //�������� �������

	if (speed == 2)
	{
		Sleep(100); // ����� 0.1 ������, ����� ��� ������� ������� � �������� ����� �������
	}
	else if (speed == 1)
	{
		Sleep(500); // ����� 0.5 ������, ����� ��� ������� ������� � �������� ����� �������
	}
	else
	{
		Sleep(10); // ����� 0.01 ������, ����� ��� ������� ������� � �������� ����� �������
	}
}

void input()
{
	if (_kbhit())   // �������� �� ��� ������ ����� ����������
	{
		switch (_getch())  // �� �� �� ��������(��� ����� �������� ������� ���� ���� ����������)
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
	//���� �쳿 �
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;  // ������ "�������� �������"

	//������� �������� ������ ��� �� ���� ����� 
	tailX[0] = x;
	tailY[0] = y;

	//��� ������� ��� ���� ��� ���� ����� � ���� �� ���
	for (int i = 1; i < kTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];

		tailX[i] = prevX;
		tailY[i] = prevY;

		prevX = prev2X;
		prevY = prev2Y;
	}

	//�������� �� ��� ���������� ��� 
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

	//���� ����� �������� �� ��� ����(�� �����) 
	if (x >= width - 1)
	{
		x = 0;
	}
	else if (x < 0)
	{
		x = width - 2;
	}

	//���� ����� �������� �� ��� ����(�� �����) 
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

	//��� ���������� �� ������� ������(�����(���� �������� �� ������� ��)) � ���������� �� �� ��� �������
	if (x == fruitX && y == fruitY)
	{
		score += 5;
		fruitX = rand() % width;
		fruitY = rand() % height;
		kTail++;  //�������� ���� �쳿
	}
}