#include <iostream>
using namespace std;

int main()
{
	// 7.���������� ������� ������� �����, �� �� ���� �������. ϳ��� ����� �� ������ �� ������� �� ������� ����.
	//����� ����� ������������ �� ����. ������������� ������ while � ������� � ���� ����.

	int numberCount, numbers, sum = 0;

	cout << "enter number count,pls : ";
	cin >> numberCount;

	while (numberCount > 0)
	{
		cout << "enter number: ";
		cin >> numbers;

		sum += numbers;
		numberCount--;
	}

	cout << "Sum of all your numbers is " << sum << endl;
}