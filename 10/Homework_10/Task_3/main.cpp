#include <iostream>
#define ENTER cout << endl;
using namespace std;

//  3.  ���������� ����� ������ �� ������� (template)

// ������� ���������� ������
template <typename T>  // �������� �������� �������
void fillArr(int n, int m, T mas[][3]);

// ������� ������ ������:
template <typename T>  // �������� �������� �������
void displayArr(int n, int m, T mas[][3]);

// ����������� ������������� � ������������ �������� �� ������� ��������� �������
template <typename T>  // �������� �������� �������
void minArr(int n, int m, T mas[][3]);

template <typename T>  // �������� �������� �������
void maxArr(int n, int m, T mas[][3]);

// ���������� ��������� �� ����������� �������� ��� ������ ������ �������.
template <typename T>  // �������� �������� �������
void sortArr(int n, int m, T mas[][3]);

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

// ������� ���������� ������
template <typename T>  // �������� �������� �������
void fillArr(int n, int m, T mas[][3])
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

// ������� ������ ������:
template <typename T>  // �������� �������� �������
void displayArr(int n, int m, T mas[][3])
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

// ����������� ������������� � ������������ �������� �� ������� ��������� �������
template <typename T>  // �������� �������� �������
void minArr(int n, int m, T mas[][3])
{
	T min = mas[0][0];

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

template <typename T>  // �������� �������� �������
void maxArr(int n, int m, T mas[][3])
{
	T max = mas[0][0];

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

// ���������� ��������� �� ����������� �������� ��� ������ ������ �������.
template <typename T>  // �������� �������� �������
void sortArr(int n, int m, T mas[][3])
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				if (mas[k][j] < mas[k][i])
				{
					T temp = mas[k][i];
					mas[k][i] = mas[k][j];
					mas[k][j] = temp;
				}
			}
		}
	}
}