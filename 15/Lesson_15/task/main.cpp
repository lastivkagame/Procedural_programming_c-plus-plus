#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void main()
{
	char* pts = new char[100];
	char* pts_2 = new char[100];

	cout << " Enter your string: ";//ввод исходной строки
	cin.getline(pts, 100);

	cout << "\n Your string: ";//вывод исходной строки на экран
	for (int i = 0; i < strlen(pts); i++)
	{
		cout << *(pts + i);
	}

	char* OldWord = new char[100];
	char* NewWord = new char[100];

	cout << "\n\n Enter the word you want to change: ";//ввод слова, которое хотим заменить
	cin >> OldWord;
	cin.ignore();

	cout << "\n Enter new word: ";//ввод слова, которым хотим заменить
	cin >> NewWord;

	cout << strcmp(pts, OldWord); // - для сравнивания строк
	
	//strcpy(pts, NewWord); // - копирование содержимого из одной строки в другую
}