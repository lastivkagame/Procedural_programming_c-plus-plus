/* ������� 8:
��������� ��������� �� ������ ����� �����, ��������� ����� ��������� �������. ������������
� ��������� ���������� ���������� ��� ����������� �� �������, � ����� ��������
�������������.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(nullptr));

	const int SIZE = 5;
	int arr1[SIZE];
	int* pArr1 = arr1;
	int rezalt = 0;

	cout << "   Array \n { ";
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 50;
		cout << *pArr1 << " ";

		rezalt += *pArr1;
		pArr1++;
	}
	cout << "}\n\n";

	cout << "Rezalt(sum array): " << rezalt << endl;

	return 0;
}