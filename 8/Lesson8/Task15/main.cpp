#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	/*15.�������� ��� ������ ������. �� ���� � ���� �� � ����� � ���������� ����� 10 �� 10, ���������� ��������� �λ.
	�������� ������ �� �����. ����� �������� �������� ������ �ѻ ���� �� ���. ������� ����� �� �����.
	���������� �� ������ ���������� ������. ���� �� ����� �� ������, ������� �������� ����������� � �������� ���.
	���� �� ��������, ������� �������� ����������� � ������� ���������� ������ (����� �� �������).
	���� ���������� ��� ��������� ���������� (�� �������) � ������� �������� ����������� � �������� ���.*/

	srand(time(nullptr));

	cout << "You must find Semen in your garden (10x10)\n";
	cout << "until he had destroyed the vegetables\n";

	//��������� ����� (garden) 10�10
	const int ROWS = 10, COLUMNS = 10;
	char garden[ROWS][COLUMNS];

	//���������� ����� �������� �
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			garden[i][j] = 'O';
		}
	}

	//��������� ����� ����
	while (true)
	{
		//������ �����, �� ���������� �����
		int rowSemen = rand() % ROWS;
		int columnSemen = rand() % COLUMNS;
		garden[rowSemen][columnSemen] = { 'C' };

		//�������� �� ����� ����� � ���� ������ �
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << garden[i][j] << " ";
			}
			cout << endl;
		}

		//��������� ��������� �� �� ������ ����������
		int row, column;
		cout << "Input the coordinates of Semen (ROW and COLUMN).\n";
		cout << "Enter ROW: ";
		cin >> row;
		row--;
		cout << "Enter the COLUMN: ";
		cin >> column;
		column--;

		//���� ������ �������� ����� �� 1, ��� ����� �� 10, ����� ���
		if (row < 0 || row > ROWS - 1 || column < 0 || column > COLUMNS - 1)
		{
			cout << "\n Semen escaped\n";
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					garden[i][j] = 'X';
					cout << garden[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}

		//���� ��������� ������
		if (garden[row][column] == 'C')
		{
			cout << "\nYou WIN. Strike him well.\n";
			break;
		}
		// ���� �� ������� �� ������� ������ - ��������� �������� �
		garden[rowSemen][columnSemen] = { 'X' };
		cout << "\nTry again!\n";
	}

	system("pause");
	return 0;
}