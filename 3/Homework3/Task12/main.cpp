#include <iostream>
using namespace std;

int main()
{
	//12.���������� ������� ��� �����. �������� �� ����� ����� ����� �� ����� (�� ����� ���� 1, ���� ���).
	// �������������� �������� >.

	int number1, number2;

	cout << "enter number1, pls: ";
	cin >> number1;

	cout << "enter number2, pls: ";
	cin >> number2;

	cout << "\n0 - false\n";
	cout << "1 - true\n\n";

	cout << "Number2 > number1, isn't it\?\n";
	cout << "Answer: ";
	cout << (number2 > number1) << endl;  //cout << boolalpha << (number2 > number1) << endl;  // -  ��� ���������(������ ��� �����(������� ��� ����))

}