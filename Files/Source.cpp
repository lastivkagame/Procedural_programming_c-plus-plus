#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

struct Book {
	char name[100];
	char author[100];
	int year;
};
Book* ReadFromFile(int &size);
Book* AddBook(Book*, int& size, Book b);
void WriteToFile(Book*, int size);
void main()
{
	//ofstream fout;
	//fout.open("test.txt");
	//fout << "Hello file!" << endl;
	//fout.close();

	//ofstream fout("test.txt",ios::app); // ios:: mode opening file   app - append
	//fout << "Another line";
	//fout << endl << 23 << endl;
	//fout  << 100 << endl;
	//fout <<  230 << endl;
	//fout.close();

#pragma region read_from_file
	//char * str = new char[100];
	//ifstream fin("TEST.TXT");
	////fin.open("test.txt");
	//if (!fin.is_open())
	//	cout << "File not found\n";
	//else
	//{
	//	while (!fin.eof())
	//		//fin >> str;
	//	{
	//		fin.getline(str, 100);
	//		cout << "Read from file: " << str << endl;
	//	}
	//}
	//fin.close();
#pragma endregion
	srand(time(0));
#pragma region array to file
	//const int N = 10;
	//ofstream fout("numbers.txt"/*, ios::out*/);
	//int arr[N];
	//for (int i = 0; i < N; i++)
	//{
	//	arr[i] = rand() % 20;
	//	fout << arr[i] << " ";
	//}
	//fout.close();

	//ifstream in("numbers.txt"/*, ios::in*/);
	//int res[N];
	//int i = 0;
	//float avg = 0;
	//while (in >> res[i])
	//{

	//	avg += res[i++];
	//}
	//cout << "Average: " << avg / (i - 1) << endl;
	//cout << "I = : " << i << endl;
#pragma endregion

	int size = 2;
	Book *books = new Book[size];
	strcpy_s(books[0].author, "Lafore.");
	strcpy_s(books[0].name, "C++");
	books[0].year = 2009;
	strcpy_s(books[1].author, "Buday.");
	strcpy_s(books[1].name, "Pattern");
	books[1].year = 2015;
	Book add{ "C#", "Troelsen", 2019 };
	books = AddBook(books, size, add/*new Book{ "C#", "Troelsen", 2019 }*/);

	WriteToFile(books, size);
	size = 0;
	Book *copy = nullptr;
	copy = ReadFromFile(size);

	cout << "Book: " << copy[1].author << endl;
	cout << "Book: " << copy[1].name << endl;
	cout << "Book: " << copy[1].year << endl;
	system("pause");
}

Book* AddBook(Book *books, int& size, Book b)
{
	Book * temp = new Book[size + 1];
	if (books != nullptr) {
		for (int i = 0; i < size; i++)
		{
			temp[i] = books[i];
		}
	}
		strcpy_s(temp[size].author, b.author);
		strcpy_s(temp[size].name, b.name);
		temp[size].year = b.year;
		books = new Book[size + 1];
		size++;
	
	return temp;
}

void WriteToFile(Book *books, int size)
{
	ofstream out("books.txt");
	for (int i = 0; i < size; i++)
	{
		out << books[i].name << endl;
		out << books[i].author << endl;
		out << books[i].year << endl;
	}
	out.close();
}


Book* ReadFromFile(int &size)
{
	ifstream in("books.txt");
	Book* tempBooks = nullptr;
	while (!in.eof())
	{
		Book temp;
		in >> temp.name;
		in >> temp.author;
		in >> temp.year;
		tempBooks = AddBook(tempBooks, size, temp);
	}
	return tempBooks;
}