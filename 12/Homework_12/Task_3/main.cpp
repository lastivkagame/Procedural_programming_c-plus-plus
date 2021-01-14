/* ������� 3:
��������� ��� ��������� �� ������� ����� �����, ����������� ���� ������ � ������ ���, �����
�� ������ ������� �������� ���������� � �������� �������.
������������ � ��������� ���������� ���������� ��� ����������� �� �������, � �����
�������� �������������.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(nullptr));

	const int SIZE = 5;
	int arr1[SIZE];
	int arr2[SIZE];

	int* pArr1 = arr1;
	int* pArr2 = arr2;

	cout << "   Array #1 \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 100;

		cout << *pArr1 << " ";
		pArr1++;
	}

	cout << "}\n\n";

	cout << "   Array #2 \n { ";

	for (int i = 0; i < SIZE; i++)
	{
		pArr1--;
		pArr2++;

		pArr2 = pArr1;
		cout << *pArr2 << " ";
	}
	cout << "}\n\n";

	return 0;
}