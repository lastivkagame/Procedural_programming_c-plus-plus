#include <iostream>
using namespace std;

int main()
{
	// ������� ����������� �� ��� ����� ������ �� � ����� � ����� � ����. �����������
	// �� � ���� �� 5. � ����� ���� 10 �����. ������ �� ������ ��������. �� �������� ����� ���?
	const int PEOPLE = 10;
	int group1[PEOPLE], group2[PEOPLE], group3[PEOPLE], group4[PEOPLE], group5[PEOPLE];

	cout << "Group #1\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group1[i];
	}

	cout << "Group #2\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group2[i];
	}

	cout << "Group #3\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group3[i];
	}

	cout << "Group #4\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group4[i];
	}

	cout << "Group #5\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group5[i];
	}

	// �� �������� �� �� �� ������? � �������� �� ���� 5 �������? � ���� ����� ���� ����� ��������?
	// �� ����� �� �� ����� ��'������ �������� � ���� �����, ��� � ����� ��'������ � �����.

	// � ��� � ��� ��������� ����������� ������. ��������� ���������� �����.
	// ���������� ����� - �� �����, ������ ������� ����� - �� �����.

	// ���������: ���_����� ��'�_������[ʳ������_������][ʳ������_��������];
	// �������:
	int groups[5][10];

	// ���������: ������ �������� ������? 5 * 10 = 50. ������ �������� ������? 6. ����?
	//            �� � ����� ������. �� ��� 1. ������ ���� ������� - �� �����. � �� �� 5.

	// �� ���������� �� ������� "��������" (��������) � ������ �����?
	// ��������� ��������� �� �������� ����������� ������:
	// ��'�_������[������_������][������_��������]

	// ������� ���������� ���, �������������� ��� �����:
	int number = 1;
	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[0][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[1][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[2][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[3][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[4][i];
	}

	// ����� �� ������ ������ ������� ������� ����������� �����.
	int number = 1;
	int j = 0;
	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	// � ����� �� ������ ��, ��� ������������ 5 ����. � ���� ������ �������� �� � ������� ����.
	// ���������� ������ � ����, �������������� ��� �� �� ����������.
	const int GROUPS = 5, STUDENTS = 10;
	int groups[GROUPS][STUDENTS];

	for (int i = 0; i < GROUPS; i++)
	{
		cout << "Group #" << i + 1 << endl;
		for (int j = 0; j < STUDENTS; j++)
		{
			cout << "Student #" << i + 1 << ", enter your number: ";
			cin >> groups[j][i];
		}
	}

	// ����� ���� �� �������� ��������/�������� ������� ���� �� ������� ������� ��������,
	// �� ��� ���������� ������� ���� ���� �����.

	// ���������� �1: ���� ��� ����� ��������������� �� ���� ��������� ����� � ������� - ��������������
	//                ���������� �����.

	// ���������� �2: ��� ������� 2 ������ ����� ��� �����: ������� � ���������.

	// ���������� �3: ��� ������� ���������� ������� � ����������� ����� ����� �����������,
	//                �� ������ ����� - �� ������� �����, � ������ - �� ������� ��������� � ������� �����.
	const int ROWS = 3, COLUMNS = 5;
	int arr[ROWS][COLUMNS];

	for (int i = 0; i < ROWS; i++) // ����������� �� ����������� �� ������� �����
	{
		for (int j = 0; j < COLUMNS; j++) // �� � ������� �����. ����������� �� ����������� �� ������� ���� ���������
		{
			arr[i][j] = i * j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// ���������� �4: ���������� ����� - �� ���� ���� �� ���� ������������� ������. �� � 3-�������, 4-�������
	//                � ��� ���, ���� ��� �� �������. � Ͳ���� �� �������������� � ���� �������� ����� �� 2-�������
	//                �����, ��� ����� �� ���� ����� �, � �� �� ���������������, ������ �� 3-��������. ��� �� ��� ����������.
	int arr2[2][3][4]; // 3-������� �����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				arr2[i][j][k] = i * j + k;
				cout << arr2[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	// 3-������� ����� ����� ����������� �� ���. 4-������� ��� ����������� ����� � ��� ���...

	return 0;
}