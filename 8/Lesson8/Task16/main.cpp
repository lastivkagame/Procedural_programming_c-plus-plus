#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//16.�������� �������� ��� ���������. �� ��������� ���������� �����, ���������� ���� ��������.
	// �������� �� ����� � ������� � ����������� ������ ������ � ����������, ���� ��� ������ ���������.
	// ��� ���������� ����� �������� �� �������. ������ � ��� ���� � �� ����� ����. ����� ���� ����,
	// ���� ���������� �������� ����� ��������.

	srand(time(nullptr));

	int row, column;
	const int ROWS = 5, COLUMNS = 5;
	char arr[ROWS][COLUMNS];

	for (int i = 0; i < COLUMNS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = ' ';
		}
	}

	while (true)
	{
		cout << "Enter the COLUMN: ";
		cin >> column;
		column--;

		cout << "Enter ROW: ";
		cin >> row;
		row--;

		if (column < 0 || column > COLUMNS || row < 0 || row > ROWS)
		{
			cout << "Incorrect direction!\n";
		}
		else
		{
			cout << "Enter symbol : ";
			cin >> arr[column][row];
		}

		cout << "\tArray: \n";

		for (int i = 0; i < COLUMNS; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				cout << " " << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}