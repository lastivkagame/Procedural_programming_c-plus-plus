#include <iostream>
using namespace std;

int main()
{
	// 11.�� ���� ������, ����� �� ����� ���������� ������� ���� � ���� � �� ��� �����.
	//�������� while �� do while � ������ ��� ��� ������������ 0 � �䒺�� �����.

	int number1, numberDigits = 0;

	cout << "enter number 1,pls : ";
	cin >> number1;

	do
	{
		numberDigits++;
		number1 /= 10;

	} while (number1 != 0);

	cout << "Your number have : " << numberDigits << " digits" << endl;
}