#include <iostream>
using namespace std;

int main()
{
	// 13.���������� ������� ����� (���������� �� ���� �������). ������� �� ����� �������� ����� �����. 
	//�������� ������ � ���. �� �� �������. �������� ����� N = 1*2*3*�*N.

	int number, product = 1;

	cout << "enter number,pls: ";
	cin >> number;

	while (number > 0)
	{
		product *= number;
		number--;
	}
	cout << "Dobytok all number " << product;
}