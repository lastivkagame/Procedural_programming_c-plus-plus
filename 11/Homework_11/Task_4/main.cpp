#include <iostream>
using namespace std;

//4. �������� ����������� ������� ���������� ���������� ����� (��������� 5!=5*4*3*2*1)
//���������������� ������ ������� ��������.
int factorialNumber(int number);

int main() {
	//test
	int number;

	cout << "Enter number, pls:  ";
	cin >> number;
	cout << "Number Factorial: " << number << " != " << factorialNumber(number) << endl;

	return 0;
}

//��������� �����
int rezalt = 1;

int factorialNumber(int number)
{
	rezalt *= number;
	number--;

	if (number > 1)
	{
		factorialNumber(number);
	}

	return rezalt;
}