#include <iostream>
using namespace std;

int main()
{
	/* 16.������� ������������ Direction � ����������� HORIZONTAL, VERTICAL. ������� ����� ����� ������������.
	����������� ���������� ����������� �������� ���. H � �������������, V � �����������. ���������� � ���������
	����� ������� ������. ������� switch ������������ ���� � ���� �� ���� �� ���������� ������� � ������� �����
	������������ �������� ���������. ������ ������� ����������� ��� ������� � ������� �������� ��� ������. ϳ���
	����� �������� � ����������� ������ ������� �� ���� �������. ���������� ������� �� ������� �� ��� �� ����
	�� ����� ������ ����� ����� �� 0. ��������� �� � ���� do while. ϳ��� ����� �������� ���� ������ �� ����
	�������. ³� ���� �������. ϳ��� ����� � switch ������������ �������� ����� ������������, � ���� ��� �� ����
	�������������� � ������� ����� �� ����� ������� ���� �������. ���� ����������� � �� ��������.
	*/

	enum Direction { HORIZONTAL = 'H', VERTICAL = 'V' };

	Direction Line;
	char choose, symbol;
	int number;

	cout << "Select a line. H - horizontal line, V - vertical line. Your choose: ";
	cin >> choose;

	//1)���� �� ���� ����������
	switch (choose)
	{
	case 'H':
		Line = HORIZONTAL;
		break;
	case 'h':
		Line = HORIZONTAL;
		break;
	case'V':
		Line = VERTICAL;
		break;
	case'v':
		Line = VERTICAL;
		break;
	default:
		cout << "Incorrect direction.(Vertical line has been automatically selected)\n";
		Line = VERTICAL;
		break;
	}

	//2)������� ������� �� �����
	do
	{
		cout << "How many characters you want to display\? You want : ";
		cin >> number;
	} while (number < 0);

	cout << "How symbol to display(enter pls): ";
	cin >> symbol;

	//3)����
	switch (Line)
	{
	case HORIZONTAL:
		while (number > 0)
		{
			cout << symbol << "  ";
			number--;
		}
		break;
	case VERTICAL:
		while (number > 0)
		{
			cout << symbol << "  \n";
			number--;
		}
		break;
	default:
		break;
	}
}