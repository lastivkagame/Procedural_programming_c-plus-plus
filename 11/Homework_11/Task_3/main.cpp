#include <iostream>
using namespace std;

//3.�������� ����������� �������, ������� ��������� ����� ���� ����� � ��������� �� a �� b.
//������������ ������ a � b.���������������� ������ ������� ��������.

int sumNumber(int a, int b);

int main() {

	int a, b;

	cout << "Enter number a, pls: ";
	cin >> a;

	cout << "Enter number b, pls: ";
	cin >> b;

	cout << "Sum all number between(include a and b) " << a << " and " << b << " = " << sumNumber(a, b) << endl;

	return 0;
}

//��������� �����
int rezalt = 0;

int sumNumber(int a, int b)
{
	rezalt += a;

	if (a != b)
	{
		a++;
		sumNumber(a, b);
	}

	return rezalt;
}