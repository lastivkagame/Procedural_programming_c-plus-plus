#include <iostream>
using namespace std;

int main() {
	//�������� �������� ���� ���� ����� ��������?�. ��������� ��������: � ����� char answer 
	//(���� ������ �����������), � ����� int balance, ��� �������� ���� 0. �������� ����� �������. 
	//� 4 ������� ������. ���������� ������� ���� �� ���. ��������� ��� ���� �������: ������ ���� 2 + 2 ? 
	//������� : a � 2, b � 4, c � 6, d � 8.  ��������� ���� ������� � switch.
	//� ��������� ������ ��������� �������� �������, ����� ���� ��������� � ��� 4 ����.
	//� ������ ���������� �������� �� ������� �������� ����� ����(������� ��������� += ).
	//����� �� �� ���� ���� � ����� � ����� � ��� ���.������ 3 ������� ������, �� �����, 
	//�� ��� ���� ����� ������ ���. ���� ���������� ������� ����������� ������� � ������ �����������.
	//���� ���������� ������ �� �� ������� � ���������� ������ � ������.

	cout << "\t\t\tWho want stay millionaire\?\n";

	char answer;
	int balance = 0;

	cout << " - First task\n";
	cout << "Give answer: 1000 + 1010 + 1900 + 1090 + 1100 =  \n";
	cout << "a - 7000, b - 6100, c - 6010, d - 7100\n";
	cout << "Your answer: ";
	cin >> answer;

	switch (answer)            // �������  - 1
	{
	case 'a':
		cout << "This is wrong answer\n";
		balance = 0;
		cout << " Your balance:" << balance << endl;
		break;
	case 'b':
		cout << "This is the correct answer\!\n";
		cout << "1000 + 1010 + 1900 + 1090 + 1100 = " << 1000 + 1010 + 1900 + 1090 + 1100 << endl;
		balance += 2;
		cout << " Your balance:" << balance << endl << endl;

		cout << " - Second task\n";
		cout << "Give answer: 1000 + 1310 + 1900 + 1070 + 2100 =  \n";
		cout << "a - 7000, b - 6380, c - 7380, d - 7280\n";
		cout << "Your answer: ";
		cin >> answer;

		switch (answer)       // ������� - 2 
		{
		case 'a':
			cout << "This is wrong answer\n";
			balance = 0;
			cout << " Your balance:" << balance << endl;
			break;
		case 'b':
			cout << "This is wrong answer\n";
			balance = 0;
			cout << " Your balance:" << balance << endl;
			break;
		case 'c':
			cout << "This is the correct answer\!\n";
			cout << "1000 + 1310 + 1900 + 1070 + 2100 = " << 1000 + 1310 + 1900 + 1070 + 2100 << endl;
			balance += 2;
			cout << " Your balance:" << balance << endl << endl;

			cout << " - Third task\n";
			cout << "In the month, three Sundays fell on even numbers.What day of the week was the seventh of this month?\n";
			cout << "a - Saturday, b - Wednesday, c - Monday, d - Friday\n";
			cout << "Your answer: ";
			cin >> answer;

			switch (answer)        // ������� 3
			{
			case 'a':
				cout << "This is wrong answer\n";
				balance = 0;
				cout << " Your balance:" << balance << endl;
				break;
			case 'b':
				cout << "This is wrong answer\n";
				balance = 0;
				cout << " Your balance:" << balance << endl;
				break;
			case 'c':
				cout << "This is wrong answer\n";
				balance = 0;
				cout << " Your balance:" << balance << endl;
				break;
			case 'd':
				cout << "This is the correct answer\!\n";
				balance += 2;
				cout << "Congratulations\! You win\!\n";
				cout << "Your balance : " << balance << endl;
				break;
			default:
				cout << "Incorrect direction";
				break;
			}
			break;
		case 'd':
			cout << "This is wrong answer\n";
			balance = 0;
			cout << " Your balance:" << balance << endl;
			break;
		default:
			cout << "Incorrect direction";
			break;
		}
		break;
	case 'c':
		cout << "This is wrong answer\n";
		balance = 0;
		cout << " Your balance:" << balance << endl;
		break;
	case 'd':
		cout << "This is wrong answer\n";
		balance = 0;
		cout << " Your balance:" << balance << endl;
		break;
	default:
		cout << "Incorrect direction";
		break;
	}

	cout << endl;

	system("pause");
	return 0;
}