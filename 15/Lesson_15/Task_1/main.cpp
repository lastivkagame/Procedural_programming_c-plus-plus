/* H������� ������ �������� ������� �� ����� � �������:
  task - 1 : �������� ������� ��� �������� ���������� ������������ ����� � ������������� �����.
  ����� ��������� � �����.���������, �����() (()) () ��������� � ����� ����������� �����
  ������� ����������.������()(��())  �� )(�� � ����������

 task - 2 : ���� �������.�������� ����� � ������ ������ ����� �����.�������� �������� �������.

 task - 3 : ������� ��� � ������.� �������. ������� ���������� ���� ������� ������� ����� ������
 � ���������. ����������� ��������� ����� �������
*/

#include <iostream>
using namespace std;

bool correctMathSring(char userArr[]);
void replaceWorld(char userArr[], char userArrWord[], char userArrWordReplace[]);

int main() {

#pragma region task - 1
	char* userArr = new char[100];

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

	delete[]userArr;

#pragma endregion 

#pragma region task - 2
	char userArrStr[] = { "Hello! Today 09/15/2019. Have a nice day!\n" };
	char* pts_2 = new char[100];

	cout << "\n Your string: ";//����� �������� ������ �� �����
	for (int i = 0; i < strlen(userArrStr); i++)
	{
		cout << *(userArrStr + i);
	}

	char* OldWord = new char[100];
	char* NewWord = new char[100];

	cout << "\n Enter the word you want to change: ";//���� �����, ������� ����� ��������
	cin >> OldWord;

	cout << "\n Enter new word: ";//���� �����, ������� ����� ��������
	cin >> NewWord;

	//replaceWorld(userArrStr, userArrWord, userArrWordReplace);
	//cout << userArrStr << endl;

#pragma endregion
	system("pause");
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

void replaceWorld(char userArr[], char userArrWord[], char userArrWordReplace[])
{
	int j, h = strlen(userArrWordReplace);
	char* helpArr = new char[(strlen(userArr) + strlen(userArrWord))];

	//pch = strstr(str, );

//	if(j == h)

}

