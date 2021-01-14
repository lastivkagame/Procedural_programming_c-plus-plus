/* - Задание 4: Разработайте программу «Библиотека».
Создайте структуру «Книга»(название, автор, издательство, жанр).
Создайте массив из 10 книг.Реализуйте для него следующие возможности :
~Редактировать книгу
~Печать всех книг
~Поиск книг по автору*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct library {
	string name;
	char author[20];
	string publishing;
	string genre;
};

void printBooks(library book[], int SIZE);
void editBooks(library book[], int SIZE);
void searchBooks(library book[], int SIZE);

int main() {

	const int SIZE = 10;
	library book, book1, book2, book3, book4, book5, book6, book7, book8, book9;
	library arrBooks[SIZE] = { book, book1, book2, book3, book4, book5, book6, book7, book8, book9 };

	//ініціалізуємо (хай будуть стандартні початкові значення)
	for (int i = 0; i < 10; i++)
	{
		arrBooks[i].name = "some book";
		strcpy_s(arrBooks[i].author, "unknown");
		arrBooks[i].publishing = "unkown";
		arrBooks[i].genre = "some";
	}

	int choose;

	do {

		system("cls");   //щоб забрати лишнє з екрану

		cout << "\tMenu\n";
		cout << " 1 - Edit the book\n";
		cout << " 2 - Print all books\n";
		cout << " 3 - Search for books by author\n";
		cout << " 4 - Exit\n";

		cout << "Answer: ";
		cin >> choose;

		system("cls");

		switch (choose)
		{
		case 1:
			editBooks(arrBooks, SIZE);
			break;
		case 2:
			printBooks(arrBooks, SIZE);
			break;
		case 3:
			searchBooks(arrBooks, SIZE);
			break;
		case 4:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Inccorect direction!\n";
			break;
		}

	} while (choose != 4);

	system("pause");
	return 0;
}

void printBooks(library books[], int SIZE)
{
	cout << setw(15) << "-Book- " << setw(20) << " -Author- " << setw(15);
	cout << " -Publishing- " << setw(15) << " -Genre-\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << " " << i << setw(15) << books[i].name << setw(15) << books[i].author;
		cout << setw(15) << books[i].publishing << setw(15) << books[i].genre << endl;
	}

	cout << endl;
	system("pause");
}

void editBooks(library book[], int SIZE)
{
	int choose, choose2;

	cout << "|    All Books     |\n";
	cout << " ------------------\n";
	printBooks(book, SIZE); //виводжу всі книги щоб користувач вибрав яку хочке редактувати
	cout << "10 - exit\n";
	cout << "Please choose how you want edit(enter number 0-9): ";
	cin >> choose;
	system("cls");

	if (choose != 10)
	{
		if (choose > -1 && choose < 11)
		{
			cout << "What you want edit?\n";
			cout << "1 - name\n";
			cout << "2 - author\n";
			cout << "3 - publishing\n";
			cout << "4 - gendre\n";
			cout << "5 - nothing\n";
			cout << "Answer: ";
			cin >> choose2;
			cin.ignore(100, '\n');

			switch (choose2)
			{
			case 1:
				cout << "Enter name of book: ";
				cin >> book[choose].name;
				break;
			case 2:
				cout << "Enter author of book: ";
				cin.getline(book[choose].author, 20);
				break;
			case 3:
				cout << "Enter publishing of book: ";
				cin >> book[choose].publishing;
				break;
			case 4:
				cout << "Enter gendr of book: ";
				cin >> book[choose].genre;
				break;
			case 5:
				break;
			default:
				cout << "Inccorect direction!\n";
				break;
			}

		}
		else
		{
			cout << "Inccorect direction!\n";
		}
	}
	system("pause");
}

void searchBooks(library book[], int SIZE)
{
	char author[50];
	cout << "Enter author,pls: ";
	cin >> author;

	bool flag = true;
	int digits = 0, number;

	cout << "Books of this author: \n";
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < strlen(author) - 1; i++)
		{
			if (author[i] != book[j].author[i])
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			digits++;
		}

		if (flag)
		{
			cout << " - " << book[j].name << endl;
		}

		flag = true;
	}

	if (digits == 0)
	{
		cout << " Sorry. In library no book of this author\n\n";
	}

	system("pause");
}