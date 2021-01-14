/*1.��������� CandyBar �������� ��� �����.
 - ������ �� ��� �������� ������������ ������� ������.
 - ������ - �� ��� ( ������� ����� ����� ������� �����) , �
 - ������ - ����� ������� (����� ��������).
 �������� ���������, ����������� ��� ��������� � ��������� ���������� ���� CandyBar �� ����� snack,
 ������������� �� ����� ���������� "Mocha Munch ", 2. 3 � 350, ��������������.
	������������� ������ ���� ������ ���������� snack. �, �������, ���������
������ ���������� ���������� ���� ����������.*/

/*2.��������� CandyBar �������� ��� �����, ��� ������� � ���������� ����������.
�������� ���������, ������� ������� ������ �� ���� �������� CandyBar, ��������������
�� ���������� �� ���� ���������� � ����� ���������� ���������� ������ ���������.*/

#include <iostream>
using namespace std;

struct CandyBar
{
	char name[30];
	double masa;
	int calories;
};

void printSnack(CandyBar snack);         //��� ����� ���� ��������� ���� �����������
void printSnacks(CandyBar snack[], int size);  // ��� ����� ������ �������� 

int main() {

	CandyBar snack = { "Mocha Munch " , 2.3, 350 };
	CandyBar snack2 = { "Chex Mix" , 2.5, 400 };
	CandyBar snack3 = { "Terra " , 2.1, 300 };

	//1
	printSnack(snack);

	//2
	cout << "-------------------\n";
	const int SIZE = 3;
	CandyBar arr[SIZE] = { snack, snack2, snack3 };

	printSnacks(arr, SIZE);

	return 0;
}

void printSnack(CandyBar snack)
{
	cout << "   -Snack-  \n";
	cout << "Name: " << snack.name << endl;
	cout << "Masa: " << snack.masa << endl;
	cout << "Calories: " << snack.calories << endl;
}

void printSnacks(CandyBar snack[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1;
		printSnack(snack[i]);
		cout << endl;
	}
}