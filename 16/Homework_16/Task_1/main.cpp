/*написати власну бібліотеку функцій по роботі з рядками:

1) Написати функцію для перевірки коректності розташування дужок у арифметичному виразі.
 Вираз записаний у рядку. Наприклад, вираз ( ) ( ( ) ) ( ) коректний – кожній відкриваючій
 дужці відповідає закриваюча.  Вирази ()( чи ( ))  чи )( не є коректними.

2) Дано речення. Виконати заміну у реченні одного слова іншим. Написати відповідну функцію.

3) Вставка слів у речень. Є речення. Можливо збільшувати дане речення додаючи слова введені
з клавіатури у позицію вказану з клавіатури. Використати динамічний масив символів*/

#include <iostream>
using namespace std;

bool correctMathSring(char userArr[]);
void replaceWord(char userArr[], char oldWord[], char newWord[]);
void addWord(char userArr[], char newWord[], int position);

int main() {


#pragma region task - 1
			/*char* userArr = new char[100];

			cout << "enter arithmetic expression: ";
			cin.getline(userArr, 100);

			if (correctMathSring(userArr))
			{
				cout << "Brackets is correct staget\n";
			}
			else
			{
				cout << "Brackets is incorrect staget\n";
			}

			delete[]userArr;*/
#pragma endregion 

#pragma region task - 2
			char userArrStr[] = { "Hello, today 09/15/2019. Have a nice day!\n" };
			char* pts_2 = new char[100];

			cout << "\n String: ";
			for (int i = 0; i < strlen(userArrStr); i++)
			{
				cout << *(userArrStr + i);
			}

			char* oldWord = new char[100];
			char* newWord = new char[100];

			cout << "\n Enter the word you want to change - ";
			cin >> oldWord;   // можна було б взяти сіn.getline але я не стала бо треба замінити тільки одне слово

			cout << "\n Enter new word: ";
			cin >> newWord;

			replaceWord(userArrStr, oldWord, newWord);

			delete[]oldWord;
			delete[]newWord;
			delete[]pts_2;

#pragma endregion

#pragma region task - 3
			/*char* userArr3 = new char[100];
			char* addWord3 = new char[100];
			int position;

			cout << "Enter your string: ";
			cin.getline(userArr3, 100);

			cout << "Enter your word: ";
			cin >> addWord3;

			cout << "Enter position when you want add word: ";
			cin >> position;

			addWord(userArr3, addWord3, position);

			delete[]userArr3;
			delete[]addWord3;*/
#pragma endregion

	return 0;
}

bool correctMathSring(char userArr[])
{
	int openBrackets = 0, closeBrackets = 0;

	for (int i = 0; i < strlen(userArr); i++)
	{
		if (userArr[i] == '(')
		{
			openBrackets++;
		}

		if (userArr[i] == ')')
		{
			closeBrackets++;
		}
	}

	if (openBrackets == closeBrackets)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void replaceWord(char userArr[], char oldWord[], char newWord[])
{
	int begin, end, k = 0, h = 0;
	bool flag = false;

	for (int i = 0; i < strlen(userArr); i++)
	{
		for (int j = 0; j < strlen(oldWord) - 1; j++)
		{
			if (j == 0)
			{
				begin = i;
			}

			if (userArr[i++] != oldWord[j])
			{
				flag = false;
				break;
			}
			if (userArr[i] == ' ')
			{
				flag = false;
				break;
			}

			if (userArr[i] == ',')
			{
				flag = false;
				break;
			}

			if (j == strlen(oldWord) - 2)
			{
				end = i;
				end++;
			}

			if (flag == false)
			{
				flag = true;
			}
		}

		if (flag == true)
		{
			break;
		}

		if (userArr[i] != ' ')
		{
			do
			{
				i++;
			} while (userArr[i] != ' ');
		}
	}

	if (flag == true)
	{
		char* userArrNew = new char[((strlen(userArr) - strlen(oldWord)) + strlen(newWord))];

		for (int i = 0; i < strlen(userArrNew); i++)
		{
			if (i < begin)
			{
				userArrNew[i] = userArr[i];
			}
			else if ((i == begin) || (i > begin) && (k < strlen(newWord)))
			{
				userArrNew[i] = newWord[k++];
			}
			else
			{
				userArrNew[i] = userArr[end++];
			}
		}


		cout << "\n Rezalt: ";
		for (int i = 0; i < strlen(userArrNew); i++)
		{
			cout << userArrNew[i];
		}
		cout << endl;

		delete[]userArrNew;

	}
	else
	{
		cout << "\n You want replace word that dont exist in this string\n";
	}
}

void addWord(char userArr[], char newWord[], int position)
{
	int k = 0, h = 0;

	char* userArrNew = new char[(strlen(userArr) + strlen(newWord) + 2)];

	for (int i = 0; i < strlen(userArrNew); i++)
	{
		if (i < position)
		{
			userArrNew[i] = userArr[h++];
		}
		else if (i <= (strlen(newWord) + position))
		{
			if (i == position)
			{
				userArrNew[i++] = ' ';
			}

			userArrNew[i] = newWord[k++];
		}
		else
		{
			userArrNew[i] = userArr[h++];
		}
	}

	cout << " Rezalt: ";
	for (int i = 0; i < strlen(userArrNew); i++)
	{
		cout << userArrNew[i];
	}
	cout << endl;

	delete[]userArrNew;
}
