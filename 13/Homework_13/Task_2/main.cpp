/*2. ������� �������, ��� ������ ����� �������, � ����� ���� �����.
���� ��������, �� �� �������� (�������� � �� �����, ��� �������� ������ ����� ��� ����,
�� � ���� �������). ����������� ������� �� �������� ������.*/

#include <iostream>
using namespace std;

bool areWordPalindr(char* userWord, int size);

int main() {

	//����� ����� ������� ����������
	char* userWord = new char;
	bool flag;

	cout << "Enter your word, pls: ";
	cin >> userWord;

	flag = areWordPalindr(userWord, strlen(userWord));
	cout << "It's palindrom: " << boolalpha << flag << endl;

	return 0;
}

bool areWordPalindr(char* userWord, int size)
{
	char* lastSymbol = &userWord[strlen(userWord) - 1];

	for (int i = 0; i < (size / 2); i++)
	{
		if (*userWord != *lastSymbol)
		{
			return false;
		}

		userWord++;
		lastSymbol--;
	}
	return true;
}