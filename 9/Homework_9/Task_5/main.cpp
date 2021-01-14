#include <iostream>
using namespace std;

bool happyNumbers(int number);

int main()
{
	//������� 5: �������� �������, ������� ����������, �������� �� ����������� ������������ �����.
	//�������� ��������� �����, � ����� ���� ������ ����� ���� ���� ��� ����� ������� ����.

	int number;

	cout << " _Happy numbers!_\n";

	cout << "Enter number: ";
	cin >> number;

	if (number >= 100000 && number < 1000000)
	{
		if (happyNumbers(number) == false)
		{
			cout << "These number is not 'happy' number. \n";
		}
		else
		{
			cout << "These number is 'happy' number. \n";
		}
	}
	else
	{
		cout << "Incorrect direction!\n";
	}

	return 0;
}

bool happyNumbers(int number)
{
	int sum1 = 0, sum2 = 0, number1 = number, digits = 6;

	for (int i = digits; i > 0; i--)
	{
		if (1000 < number1)
		{
			//���� ������ 3 �����
			sum1 += number / int(pow(10, i - 1)) % 10;
		}
		else
		{
			//���� ����� ���� �����
			sum2 += number / int(pow(10, i - 1)) % 10;
		}

		number1 /= 10;
	}

	cout << "Sum (of firsts 3 digits): " << sum1 << endl;
	cout << "Sum (of last 3 digits): " << sum2 << endl;

	cout << endl;

	if (sum1 == sum2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
