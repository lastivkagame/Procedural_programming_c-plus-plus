#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//14.�������� ���, � ��� �������� ������ �������� ����� �� 0 �� 100 (�������). ����������� ������ 5 �����
	// ���� �������. ���� ���������� �� ������, �������� ����, �� ���� ����� ����� �� ����� �� ����.

	srand(time(nullptr));
	int num = rand() % 100;

	int num2 = 0, play;

	do
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << "Enter number: ";
			cin >> num2;

			if (num < num2)
			{
				cout << "Number must be smaller!" << endl;
			}
			if (num > num2)
			{
				cout << "Number must be biggeer!" << endl;
			}
			if (j == 4)
			{
				cout << endl << "You lose! My number is  " << num << "(with 5 attempts)!" << endl;
				break;
			}
			if (num2 == num)
			{
				cout << endl << "You won! You used " << j + 1 << " attempts" << endl;
				break;
			}
		}

		cout << "Play agan? (0 - Yes, 1 - No(if dont entered number its as Yes)): ";
		cin >> play;
		cout << endl;

	} while (play != 1);

	system("pause");
	return 0;
}