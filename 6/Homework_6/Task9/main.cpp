#include <iostream>
using namespace std;

int main()
{
	//9.������ ��������� ������ ���, ��� ����������� ��� ������ �������� (��������� ���� �������).

	int x;     //������
	int y;    //������

	//��������� ���
	do {
		cout << "Enter width : ";
		cin >> y;

		cout << "Enter height : ";
		cin >> x;

		cout << endl;

		if (y <= 0 || x <= 0)
		{
			cout << "Incorrect direction\n";
		}
	} while ((y <= 0) || (x <= 0));

	//������ (������ ��� ������)
	for (int i = 0; i < y; i++)
	{
		cout << "*";
	}

	cout << endl;

	//������
	for (int i = 0; i < x - 2; i++)
	{
		cout << "*";

		for (int j = 0; j < y - 2; j++)
		{
			cout << ' ';
		}

		cout << "*\n";
	}

	// ������ (����� ���)
	if (x > 1)
	{
		for (int i = 0; i < y; i++)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << endl;
}