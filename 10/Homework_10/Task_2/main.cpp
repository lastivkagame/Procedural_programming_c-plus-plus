#include <iostream>
#define ENTER cout << endl;
using namespace std;

//2. �������� ������������� ������� (int, double, char) ��� ���������� ��������� �����:
	//  -������������� ���������� �������;
	//  -����� ������� �� �����;
	//  -����������� ������������� � ������������ �������� �� ������� ��������� �������;
	//  -���������� ��������� �� ����������� �������� ��� ������ ������ �������.

// ������� ���������� ������:
//1. ������� ��� ������ � ���������� ���� int.
void fillArr(int n, int m, int mas[][3]);

//2. ������ ��� ������ � ���������� ���� double.
void fillArr(int n, int m, double mas[][3]);

//2. ������ ��� ������ � ���������� ���� char.
void fillArr(int n, int m, char mas[][3]);


// ������� ������ ������:
//1.������� ��� ������ � ���������� ���� int.
void displayArr(int n, int m, int mas[][3]);

//2. ������ ��� ������ � ���������� ���� double.
void displayArr(int n, int m, double mas[][3]);

//3. ������ ��� ������ � ���������� ���� char.
void displayArr(int n, int m, char mas[][3]);


// ����������� ������������� � ������������ �������� �� ������� ��������� �������
// 1.������� ��� ������ � ���������� ���� int.
void minArr(int n, int m, int mas[][3]);
void maxArr(int n, int m, int mas[][3]);

//2. ������ ��� ������ � ���������� ���� double.
void minArr(int n, int m, double mas[][3]);
void maxArr(int n, int m, double mas[][3]);

//3. ������ ��� ������ � ���������� ���� char.
void minArr(int n, int m, char mas[][3]);
void maxArr(int n, int m, char mas[][3]);


// ���������� ��������� �� ����������� �������� ��� ������ ������ �������.
// 1.������� ��� ������ � ���������� ���� int.
void sortArr(int n, int m, int mas[][3]);

//2. ������ ��� ������ � ���������� ���� double.
void sortArr(int n, int m, double mas[][3]);

//3. ������ ��� ������ � ���������� ���� char.
void sortArr(int n, int m, char mas[][3]);

int main()
{
	const int n = 3, m = 3;  // ����� �������(��� ������� �����)
	int userArrInt[n][m];
	char userArrChar[n][m];
	double userArrDouble[n][m];

	//������ ������� ��� ���������� ������ ���� int, double, char
	cout << "Array 1(integerts): \n";
	fillArr(n, m, userArrInt);

	cout << "Array 2(double numbers): \n";
	fillArr(n, m, userArrDouble);

	cout << "Array 3(symbols): \n";
	fillArr(n, m, userArrChar);

	ENTER;  // �� �� � 2 �����

	//������ ������� ��� ������ ������ �� �����
	cout << "Array 1(integerts): \n";
	displayArr(n, m, userArrInt);

	cout << "Array 2(double numbers): \n";
	displayArr(n, m, userArrDouble);

	cout << "Array 3(symbols): \n";
	displayArr(n, m, userArrChar);

	ENTER;  // �� �� � 2 �����

	//���������� ���������� �� ������������� �������� �� ������� ������� �������;
	cout << "Array 1(integerts): \n";
	minArr(n, m, userArrInt);
	maxArr(n, m, userArrInt);

	ENTER;  // �� �� � 2 �����

	cout << "Array 2(double numbers): \n";
	minArr(n, m, userArrDouble);
	maxArr(n, m, userArrDouble);

	ENTER;  // �� �� � 2 �����

	cout << "Array 3(symbols): \n";
	minArr(n, m, userArrChar);
	maxArr(n, m, userArrChar);

	ENTER;  // �� �� � 2 �����

	//���������� ������
	cout << "Array 1 after sort(integerts): \n";
	sortArr(n, m, userArrInt);
	displayArr(n, m, userArrInt);

	cout << "Array 2 after sort(double numbers): \n";
	sortArr(n, m, userArrDouble);
	displayArr(n, m, userArrDouble);

	cout << "Array 3 after sort(symbols): \n";
	sortArr(n, m, userArrChar);
	displayArr(n, m, userArrChar);

	return 0;
}

// �������(����������) ��� ������ � ���������� ���� int.
void fillArr(int n, int m, int mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}

// ������(����������) ��� ������ � ���������� ���� double.
void fillArr(int n, int m, double mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}

// �������(����������) ��� ������ � ���������� ���� char.
void fillArr(int n, int m, char mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << " Enter the element of the array [" << i << "] [" << j << "] - ";
			cin >> mas[i][j];
		}
	}
}


// �������(������ �� �����) ��� ������ � ���������� ���� int.
void displayArr(int n, int m, int mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // �� �� � 2 �����
	}
}

// �������(������ �� �����) ��� ������ � ���������� ���� double.
void displayArr(int n, int m, double mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // �� �� � 2 �����
	}
}

// �������(������ �� �����) ��� ������ � ���������� ���� char.
void displayArr(int n, int m, char mas[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j];
			cout << ", ";
		}
		ENTER;  // �� �� � 2 �����
	}
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� int.
void minArr(int n, int m, int mas[][3])
{
	int min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << "\n";
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� int.
void maxArr(int n, int m, int mas[][3])
{
	int max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << "\n";
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� double.
void minArr(int n, int m, double mas[][3])
{
	double min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << "\n";
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� double.
void maxArr(int n, int m, double mas[][3])
{
	double max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << "\n";
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� char.
void minArr(int n, int m, char mas[][3])
{
	char min = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] < min)
				{
					min = mas[i][j];
				}
			}
		}
	}
	cout << "Min(on the diagonal): " << min << " ( " << char(min) << " ) \n";
}

// �������(����������� ���������� �������� �� ������� ������) ��� ������ � ���������� ���� char.
void maxArr(int n, int m, char mas[][3])
{
	char max = mas[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)    // �� �� �������
			{
				if (mas[i][j] > max)
				{
					max = mas[i][j];
				}
			}
		}
	}
	cout << "Max(on the diagonal): " << max << " ( " << char(max) << " ) \n";
}


// �������(���������� �����) ��� ������ � ���������� ���� int.
void sortArr(int n, int m, int mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					int temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}

// �������(���������� �����) ��� ������ � ���������� ���� double.
void sortArr(int n, int m, double mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					double temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}

// �������(���������� �����) ��� ������ � ���������� ���� char.
void sortArr(int n, int m, char mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					char temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}