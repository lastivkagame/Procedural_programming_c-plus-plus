/*  ������� 2:
��������� ��������� �� ������ ����� �����, �������� ������� ���������� ��������� �������
�� ���������������. ������������ � ��������� ���������� ���������� ��� ����������� �� �������, � �����
�������� �������������.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(nullptr));

	const int SIZE = 5;
	int arr[SIZE];

	int temp;

	int* start = arr;  //�������� �� ������ ������� 
	int* end = &arr[SIZE - 1];  // �������� �� ������� ������� � �����

	cout << "  Before \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << "} \n\n";

	while (start != end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

	cout << "  After \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "} \n\n";

	return 0;
}