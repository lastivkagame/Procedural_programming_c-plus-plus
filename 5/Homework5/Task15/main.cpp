#include <iostream>
using namespace std;

int main()
{
	// 15.�� ����� � ����� ������� ����� (��� ������� ����������). �� ����� ���������� ������, 
	//�� ��������� �� 400 ����� �����. ������� �� ����� ��������� ������� �����, ��� �������� �����.

	int numberApple, car = 0;

	cout << "enter number(apple),pls: ";
	cin >> numberApple;

	while (numberApple > 0)
	{
		if ((numberApple < 400) && (numberApple != 0))
		{
			car++;
			numberApple -= numberApple;
		}
		else
		{

			numberApple -= 400;
			car++;
		}
	}

	cout << "We need " << car << " car if we want to pick up all the apples\n";
}