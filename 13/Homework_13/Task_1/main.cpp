/*1. ������� ����� �������, ����������� ���� ��������� HELLO.
�������� �������, ��� ������ ��� �����, � ���� �����. ���� �������� ��� ����� � ������� ���� �������,
��� �� ��������. ���� ������� ����� ������ ��� �����, ��� �������� ���� � ����.
 ����� ����� � main �� ���� ����� � ������ ���� �������. �� ����� �� ���� HELLO OLLEH.
���������� �� ��������������� ����������, � ������� ���� ������������/������������ � ������� ������.*/

#include <iostream>
using namespace std;

void printArr(char arr[], int size);
void printArrConvers(char arr[]);

int main() {

	char arrHello[] = "HELLO";

	printArr(arrHello, strlen(arrHello));

	return 0;
}

void printArr(char arr[], int size)
{
	char* pArr = arr;

	for (int i = 0; i < size; i++)
	{
		cout << *pArr++;
	}

	printArrConvers(arr);
}

void printArrConvers(char arr[])
{
	char* pArr = &arr[strlen(arr)];

	for (int i = 0; i < strlen(arr) + 1; i++)
	{
		cout << *pArr--;
	}
}