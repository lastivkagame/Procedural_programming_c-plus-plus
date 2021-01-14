#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	/*17.�������� ������� ���������� �����, ��������� 40 �� 40. �� �� �� �쳺�� ���������� ������ ���������������
	������, ��� ����� ������� ����� �����. �������� � ����������� ���� ����� ������ �� ����. ³� ������� ������
	(�����, �� �� ����� 40 �� 40). ������� �� ����� ����� � ���������� ������� ������ ������. ����� ���� ������
	� ������� ���糿 ��� �����������, �� �� ����� �������� ����� ���� ������.*/

	srand(time(nullptr));

	const int ROWS = 40, COLUMN = 40;
	int arr[COLUMN][ROWS];
	int number, row, column;

	cout << "Your array!(with your number of columns and rows!)\n";

	cout << "Enter number of columns: ";
	cin >> column;

	cout << "Enter number of rows: ";
	cin >> row;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = rand();
		}
	}

	cout << "\tArray\n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}