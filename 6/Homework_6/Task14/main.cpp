#include <iostream>
using namespace std;

int main()
{
	/*14.Створіть перечислення Figure з константами RECTANGLE (прямокутник), TRIANGLE (трикутник) і RHOMBUS (ромб).
	Створіть змінну цього перечислення. Створіть в циклі do while меню з пунктами: вибрати прямокутник, вибрати ромб,
	вибрати трикутник. Користувач в змінну типу int вводить його вибір. В залежності від цього задайте відповідне
	значення змінній перечислення. Далі після циклу в switch проаналізуйте значення цієї змінної, і в залежності
	від нього виведіть на екран відповідну фігуру. Якщо це прямокутник – користувач вводить розміри.
	Якщо це трикутник – користувач вводить довжину двох катетів (вона однакова), якщо це ромб, то користувач вводить
	його висоту (її значення має бути непарне, інакше ромб ви не намалюєте).*/


	enum Figure { RECTANGLE = 1, TRIANGLE = 2, RHOMBUS = 3 };
	int choose;
	Figure someFigure;

	do
	{
		cout << "Choose figure\n";
		cout << "1 - Rectangle\n";
		cout << "2 - Triangle\n";
		cout << "3 - Rhombus\n";

		cout << "Your answer : ";
		cin >> choose;

		if (choose <= 0 || choose >= 4)
		{
			cout << "Incorrect direction\n";
		}

	} while ((choose >= 4) || (choose <= 0));

	if (choose == 1)
	{
		someFigure = RECTANGLE;
	}
	else if (choose == 2)
	{
		someFigure = TRIANGLE;
	}
	else
	{
		someFigure = RHOMBUS;
	}

	switch (someFigure)
	{
	case RECTANGLE:

		cout << " Your rectangle\n";

		int length, width;

		//перевірка на коректний ввід
		do
		{
			cout << "Enter the length of the rectangle : ";
			cin >> length;

			cout << "Enter the width of the rectangle : ";
			cin >> width;
			cout << endl;

			if (length <= 0 || width <= 0)
			{
				cout << "Inccorect direction\n\n";
			}

		} while (length <= 0 || width <= 0);

		for (int i = 0; i < width; i++)
		{
			cout << " * ";

			for (int b = 1; b < length; b++)
			{
				cout << " * ";
			}
			cout << endl;
		}

		break;
	case TRIANGLE:

		cout << "   Rectangular triangle\n";

		int catechists;

		//перевірка на коректний ввід
		do
		{
			cout << "Enter he rectangular triangle catechets: ";
			cin >> catechists;

			if (catechists <= 0)
			{
				cout << "Inccorect direction\n\n";
			}

		} while (catechists <= 0);

		for (int i = 0; i < catechists; i++)
		{
			for (int j = 0; j < catechists; j++)
			{
				if (i > j || i == j)
				{
					cout << " *";
				}
			}
			cout << endl;
		}

		break;
	case RHOMBUS:

		cout << "   Your Rhombus\n";

		int widthRhombus;         // будь яке непарне число
		int stepRhombus = 1;           // збільшеня \ зменшеня зірочок
		int countRhombus = 0;          //кількість зірочок

		//перевірка на коректний ввід
		do
		{
			cout << "Enter number,pls: ";
			cin >> widthRhombus;

			if ((widthRhombus <= 0) || (widthRhombus % 2 == 0))
			{
				cout << "Inccorect direction\n\n";
			}
		} while ((widthRhombus <= 0) || (widthRhombus % 2 == 0));

		for (int i = 0; i < widthRhombus; i++)
		{
			for (int j = 0; j < widthRhombus; j++)
			{
				if (j < widthRhombus / 2 - countRhombus || j > widthRhombus / 2 + countRhombus)
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
			}
			countRhombus += stepRhombus;

			if (countRhombus == widthRhombus / 2)
			{
				stepRhombus = -1;
			}
			cout << endl;
		}
		break;
	}
}