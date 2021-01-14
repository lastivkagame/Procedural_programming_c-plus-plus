#include "header.h"

bool gameOver = false;
int gameMode = 1;
int width = 30;  // ������ �������� ����
int height = 15;   //������ �������� ����
int speed = 2; //�� �������� ��� �� ������������ ����� �������

int x, y, fruitX, fruitY, score;   //���������� x i y (i ��� ������ ���), �������
int tailX[100], tailY[100], g[7], p[7];        //��� ������ �쳿 + ��� ��������(������ g,p)
int kTail;  //�� �������� ��� �� ������������ ����� �������

//��������� (��� ������������ ������)
char snakeHead = '#';
char snakeBody = '+';
char fruit = '$';
char borders = '&';
char obstackles = '/';

Move mov;

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
	kTail = 0;   //������� ������

	if (gameMode == 2)
	{
		for (int i = 0; i < 7; i++)
		{
			g[i] = rand() % width;
			p[i] = rand() % height;

			while (g[i] == x && g[i] == fruitX)
			{
				g[i] = rand() % (width - 2) + 2;
			}

			while (p[i] == y && p[i] == fruitY)
			{
				p[i] = rand() % (height - 2) + 2;
			}
		}
	}
}

void draw()
{
	system("cls");  // ������� �����

	cout << endl;
	cout << " ****  *     *     *     *  *  *****\n";
	cout << " *     *   * *    * *    * *   *    \n";
	cout << " ****  *  *  *   *   *   **    *****\n";
	cout << "    *  * *   *  *  *  *  * *   *    \n";
	cout << " ****  *     *  *     *  *  *  *****\n";
	cout << endl;

	cout << " ";
	//������������ ������ �������;
	for (int i = 0; i < width + 2; i++)
	{
		SetColor(7, 0);
		cout << borders;
		SetColor(15, 0);
	}
	cout << endl;

	//������������ ����� �������;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				SetColor(7, 0);
				cout << " " << borders;   //������� ����� 
				SetColor(15, 0);
			}
			if (j == x && i == y)
			{
				cout << snakeHead;   //������ �쳿
			}
			else if (i == fruitY && j == fruitX)
			{
				SetColor(12, 0);
				cout << fruit;   //����� ���� ��� ���� ����
				SetColor(15, 0);
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
						cout << snakeBody;
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

	cout << " ";
	//������������ ����� �������;
	for (int i = 0; i < width + 2; i++)
	{
		SetColor(7, 0);
		cout << borders;
		SetColor(15, 0);
	}
	cout << endl;

	SetColor(14, 0);
	cout << " Your score: " << score << endl;   //�������� �������
	SetColor(12, 0);
	cout << " z - EXIT" << endl;   //��� ��� ����� ���������� ���� �� ����� � ���
	SetColor(15, 0);

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
	if (_kbhit())   // �������� �� �� ������ ����� ����������(�� ������������-https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/kbhit?view=vs-2019)
	{
		switch (_getch())  // �� �� �� ��������(��� ����� �������� ������� ���� ���� ����������)-https://en.wikipedia.org/wiki/Conio.h
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
	//���� �쳿 
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

	//��� ���������� �� ������� ������(�����(���� �������� �������� �� ������� ��)) � ���������� �� �� ��� �������
	if (x == fruitX && y == fruitY)
	{
		int width_new = width - 2, height_new = height - 2;

		score += 5;

		//ĳ������ �� Y �� X(�� �������): rand() % (X - Y) + Y
		fruitX = rand() % (width_new - 2) + 2;
		fruitY = rand() % (height_new - 2) + 2;
		kTail++;  //�������� ���� �쳿
	}
}

void SetColor(int text, int background)
{
	//-http://www.cyberforum.ru/cpp-beginners/thread366423.html -���������


	//-https://ci-plus-plus-snachala.ru/?p=1553   - �� �������������
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void ShowMainDisplay()
{
	setlocale(LC_ALL, "rus");
	char step[] = { " Computer Academy STEP" };
	char group[] = { " Group 34��9-3���" };
	char person[] = { "  Shapirko O." };
	char prezent[] = { "Presents Coursework" };
	int b = 1, w = 10;

	for (int c = 0; c < 10; c++)
	{
		system("cls");
		cout << endl;
		SetColor(b, 0);
		cout << "   * * * * *	 *         *         *           *      *    * * * * * *\n";
		cout << "   *       *	 * *       *       *   *         *     *     *            \n";
		cout << "   *             *  *      *      *     *        *    *      *            \n";
		cout << "   *             *   *     *     *       *       *  *        *            \n";
		cout << "   * * * * *	 *    *    *     * * * * *       * *         * * * * * *\n";
		cout << "           *	 *     *   *    *          *     *  *        *            \n";
		cout << "           *	 *      *  *    *          *     *    *      *            \n";
		cout << "           *	 *       * *    *          *     *     *     *            \n";
		cout << "   * * * * *	 *         *    *          *     *       *   * * * * * *\n";

		SetColor(w, 0);

		int temp = b;
		b = w;
		w = temp;
		Sleep(50);
	}

	cout << endl;
	//������� ����� ���
	for (int i = 0; i < strlen(step); i++)
	{
		SetColor(9, 0);
		cout << step[i];
		Sleep(50);
	}

	cout << endl << endl << "  ";
	//������� �����
	for (int i = 0; i < strlen(group); i++)
	{
		SetColor(11, 0);
		cout << group[i];
		Sleep(50);
	}

	cout << endl << endl << "  ";
	//������� ����
	for (int i = 0; i < strlen(person); i++)
	{
		SetColor(14, 0);
		cout << person[i];
		Sleep(220);
	}

	cout << endl << endl << " ";
	//�������� �������
	for (int i = 0; i < strlen(prezent); i++)
	{
		SetColor(10, 0);
		cout << prezent[i];
		Sleep(80);  //������ 0.8 ���
	}

	cout << endl;
	cout << endl;
	cout << endl;
	SetColor(15, 0);

	Sleep(3000); //������ 30 ���
	system("cls");
}