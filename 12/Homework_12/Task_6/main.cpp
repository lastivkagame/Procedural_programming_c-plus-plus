/* ������� 6:
��������� ��������� � �������� �������������, �������� ������� �������� ���� ����������.*/

#include <iostream>
using namespace std;

int main() {

	int a, b, temp;

	cout << "Enter number a, pls: ";
	cin >> a;

	cout << "Enter number b, pls: ";
	cin >> b;

	int* pa = &a, * pb = &b;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << " a = " << *pa << endl;
	cout << " b = " << *pb << endl;

	return 0;
}