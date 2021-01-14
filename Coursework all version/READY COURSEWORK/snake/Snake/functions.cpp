#include "header.h"

bool gameOver = false;
int gameMode = 1;
int width = 30;  // ширина ігрового поля
int height = 15;   //висота ігрового поля
int speed = 2; //це швидкість гри по замовчуванню стоїть середня

int x, y, fruitX, fruitY, score;   //координати x i y (i для фрукту теж), рахунок
int tailX[100], tailY[100], g[7], p[7];        //для хвосту змії + для перешкод(масиви g,p)
int kTail;  //це швидкість гри по замовчуванню стоїть середня

//додатково (для налаштування значків)
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

	//задаємо кординати змійці (хай початково буде в центрі)
	x = width / 2 - 1;
	y = height / 2 - 1;

	//задаємо рандомні кординати фрукту (хай початково буде в центрі)
	fruitX = rand() % width;   // щоб не виходило за рамки(по ширині)
	fruitY = rand() % height;   // щоб не виходило за рамки(по висоті)

	score = 0;   // щоб рахунок був рівний нулю на початку гри
	kTail = 0;   //довжина хвоста

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
	system("cls");  // очищаємо екран

	cout << endl;
	cout << " ****  *     *     *     *  *  *****\n";
	cout << " *     *   * *    * *    * *   *    \n";
	cout << " ****  *  *  *   *   *   **    *****\n";
	cout << "    *  * *   *  *  *  *  * *   *    \n";
	cout << " ****  *     *  *     *  *  *  *****\n";
	cout << endl;

	cout << " ";
	//промальовуємо верхню границю;
	for (int i = 0; i < width + 2; i++)
	{
		SetColor(7, 0);
		cout << borders;
		SetColor(15, 0);
	}
	cout << endl;

	//промальовуємо бокові границі;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				SetColor(7, 0);
				cout << " " << borders;   //границі бокові 
				SetColor(15, 0);
			}
			if (j == x && i == y)
			{
				cout << snakeHead;   //голова змії
			}
			else if (i == fruitY && j == fruitX)
			{
				SetColor(12, 0);
				cout << fruit;   //фрукт який змія їсти буде
				SetColor(15, 0);
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
	//промальовуємо нижню границю;
	for (int i = 0; i < width + 2; i++)
	{
		SetColor(7, 0);
		cout << borders;
		SetColor(15, 0);
	}
	cout << endl;

	SetColor(14, 0);
	cout << " Your score: " << score << endl;   //виводимо рахунок
	SetColor(12, 0);
	cout << " z - EXIT" << endl;   //щоб при бажані користувач знав як вийти з гри
	SetColor(15, 0);

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
	if (_kbhit())   // перевіряє на чи кнопку нажав користувач(як корстуватися-https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/kbhit?view=vs-2019)
	{
		switch (_getch())  // на що він натиснув(щоб змійка рухалася залежно куди хоче користувач)-https://en.wikipedia.org/wiki/Conio.h
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
	//хвіст змії 
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

	//щоб користувач міг збирати фрукти(гроші(якісь предмети впринципі не важливо що)) і збільшувати за це свій рахунок
	if (x == fruitX && y == fruitY)
	{
		int width_new = width - 2, height_new = height - 2;

		score += 5;

		//Діапазон від Y до X(не включно): rand() % (X - Y) + Y
		fruitX = rand() % (width_new - 2) + 2;
		fruitY = rand() % (height_new - 2) + 2;
		kTail++;  //збільшуємо хвіст змії
	}
}

void SetColor(int text, int background)
{
	//-http://www.cyberforum.ru/cpp-beginners/thread366423.html -додатково


	//-https://ci-plus-plus-snachala.ru/?p=1553   - як користуватися
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void ShowMainDisplay()
{
	setlocale(LC_ALL, "rus");
	char step[] = { " Computer Academy STEP" };
	char group[] = { " Group 34ПС9-3Нпа" };
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
	//виводжу Назву гри
	for (int i = 0; i < strlen(step); i++)
	{
		SetColor(9, 0);
		cout << step[i];
		Sleep(50);
	}

	cout << endl << endl << "  ";
	//виводжу групу
	for (int i = 0; i < strlen(group); i++)
	{
		SetColor(11, 0);
		cout << group[i];
		Sleep(50);
	}

	cout << endl << endl << "  ";
	//виводжу себе
	for (int i = 0; i < strlen(person); i++)
	{
		SetColor(14, 0);
		cout << person[i];
		Sleep(220);
	}

	cout << endl << endl << " ";
	//виводимо курсова
	for (int i = 0; i < strlen(prezent); i++)
	{
		SetColor(10, 0);
		cout << prezent[i];
		Sleep(80);  //чекати 0.8 сек
	}

	cout << endl;
	cout << endl;
	cout << endl;
	SetColor(15, 0);

	Sleep(3000); //чекати 30 сек
	system("cls");
}