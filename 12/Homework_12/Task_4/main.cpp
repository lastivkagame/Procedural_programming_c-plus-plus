/* ������� 4:
��������� ��������� � �������� �������������, ���������� ���������� �� ���� �����.*/

#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Enter number 1, pls: ";
	cin >> a;

	cout << "Enter number 2, pls: ";
	cin >> b;

	int* pa = &a, * pb = &b;

	//���������
	if (*pa > * pb)
	{
		cout << " a > b \n ";
		cout << *pa << " > " << *pb << endl;
	}
	else if (*pa < *pb)
	{
		cout << " a < b \n ";
		cout << *pa << " < " << *pb << endl;
	}
	else
	{
		cout << " a = b \n ";
		cout << *pa << " = " << *pb << endl;
	}

	return 0;
}