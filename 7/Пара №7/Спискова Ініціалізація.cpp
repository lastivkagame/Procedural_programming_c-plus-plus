#include <iostream>
using namespace std;

int main()
{
	// ���� �� �� ����� �� ���� ������, �� �������� �������� � ����� ����.

	// ������� ��������, ���� ����� ��� �������� ������ ����� ���� �������� ��������� ����������� ������.
	// ��������� � ���� � ���� � 2 ����. � ���� �������� �����, � ���� ������ ���� ������� � ���.
	// � ���� ���� ��� ������ � ��'�. � ���� �������� ��������, � ��� � ���� ������� ��������� �� ���.
	// ��� � �������� �� ���� ����, ���� � ���� ��������� ����� ����������� ����������. �� �� �������?
	// � ���� ������������ ��������� ��������:
	const int MEMBERS = 4;
	double weight[MEMBERS];
	weight[0] = 79.32; // ����������� �� 0 ��������� � �
	weight[1] = 59.90; // �� ��� ����
	weight[2] = 32.50; // �� ��� ������� ������
	weight[3] = 41.20; // � �� ������ ������

	// ������� ������� � ������, ��� � ������ �������� - �������� ������������. ������� ��� �� ������
	// ������ ��������� ������ �������� ����� ��� ���� ��������.

	// ��������� �������� ������������:
	// 1) ���_����� ��'�_������[ʳ������_��������] = { ������_������� };
	// 2) ���_����� ��'�_������[ʳ������_��������] { ������_������� };

	// ������ ������ �� ������� ����������� ��������� "=". ������ ������� �����������, ��� � �������
	// ������, �� �� ���� ������� �������. ������ ��, ������� "������������" �����.
	double weight[MEMBERS] = { 79.32, 59, 90, 32.50 };

	// ����� ������� �������� ��������� �������� ��������, ����� � ��� �� ������ � ������ �����. �������� ������������
	// ���� ������� � ���������. �� ������ �� ��� ������������� �����. ��� ���� �� �� ���� "������". ������� �� ��� ���:
	int arr[3];
	cout << arr[0]; // �� ��� ������? 

	// ͳ����, �� ���� ������� �� ���� ���������. �� � �����, �� ���� �������� ����� �� �� ��������, �� � �� ���������� "�����"
	// ����� ��������, ��� ������ ���������. ���� ��� ���������� �����, �� �� ������ ������������� ���� ������. ��� ����� �������� ������
	// �� ��������. ��� ��, ������� ������ - �� ����� ����� � ��� ����� ���������� �����. 

	// �������� ������������ ������ �������� �� �����, ��������� �� ������ �������:
	int arr1[3] = { 1, 2, 3 };    // ��� �����
	int arr2[3] = { 1, 2, 3, 4 }; // �������. ������� ������ �������� � ������
	int arr3[3] = { 1, 2 };       // ��� �����. ����� 2 �������� ��������� ��������, �������� ������ 0! (��� �� �����)
	cout << arr3[2]; // 0
	int arr4[10] = { 10 };        // ��� �����. ������ ������� ������ 10, �� ���� 0.
	int arr5[50] = {};            // ��� �����. �� �������� ��������� 0.

	// ���� � ��� ��������� ������� ��������� �� ����� �������� � ����� ����, ��������� ��� ���:
	int arr6[4] = { , 2, 4 }; // ��� ������ �� �����.

	// ������ �������: � ����� ������ �������� ���� ����������� �������� � ���� ��������? �� ����'������ ��� ���������� ����-�������?
	// ³������ ������: �� �����, ���� �� ���� ����� � ���� ����� �� ��� ����� �� ��� ����� Ͳ��.

	// ���� �� ������������� �������� ������������, �� ����� ������ ����� �� ���������, ��������� ��� ������ ������� ��������
	int arr7[] = { 1, 2, 3, 4, 5 }; // 5 ��������
	// ��� ���� �� �� �����-����� (��������� ������), �� ����� �� ����� ����, �� �� ��� ���� ������ ��������������� �����, �� ����� ���� ������ ����� ������.

	return 0;
}