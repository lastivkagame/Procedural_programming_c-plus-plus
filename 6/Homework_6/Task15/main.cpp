#include <iostream>
using namespace std;

int main()
{
	/*15.���������� � ����� ������ ����� �� 1 �� 100. �������� �� �������� �� �����.
	�������� �� ���� �� �� ����� 50. ���������� �� ������� 3 ������� ������: ����,
	��, �� ����� �����, ��, �� ����� �����. ��� ������ ������� � �������� ���������,
	��� ����� �������� ���. ���� ���������� ���� �� ���� ����� �����, �� �������� ��� �������� 75.
	���� ���� �����, �� 62. � ��� ���. ��������� ����������� �����������. ��������� ���
	���������� �� �� ���� ������ �� ���� ����� �����. ���� �������� ����� �� 100 �� 0
	� �� �� ����� �����������, �� ���������� ���� ������. ����� ������������ � ��������,
	���� ������� ������ ��������� ���������� �� ������� (���������) 62 � 63, �� ��������
	�� ��� �����, � ���������� ���� �� �� �� ���� �����. �� ����� �����������. ���� �������� ������
	����� ����������� (��� ����� �� �� ������ ����� ���� �� ����), ������� ������� ���� �����.
	*/

	cout << "  Welcome to the game \"The program guesses your number\"!\n";

	int number, count;
	char answer;

	cout << "       Define any number from 1 to 100\n" << endl;

	do
	{
		int  left = 0, right = 100;

		for (int i = 1; i <= 7; i++)
		{
			number = (left + right) / 2;

			cout << "Yor number " << number << "?( a - Yes! ;   b - No, my number > ;   c -  No, my number <) \n";
			cout << "Answer : ";
			cin >> answer;

			if (answer == 'c')
			{
				right = number;
			}
			else if (answer == 'b')
			{
				left = number;
			}
			else if (answer == 'a')
			{
				cout << "I won! I used  " << i << " attempts!\n";
				return 0;
			}
			else
			{
				cout << "Incorrect direction: a,b and c.\n";
				i--;
			}
		}
		cout << "You cheat me!(becouse it's impossible!) So we START from the beginning!\n\n";
	} while (answer != 'a');
}