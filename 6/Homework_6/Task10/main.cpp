#include <iostream>
using namespace std;

int main()
{
	//10.������� ���� ������ for ��������� ����������� ��������� � ���������� ��������.
	// ����� �� ������� ���� 5 ������. ��������� ������� ���� ����������.

	//char a = ' * ';

	cout << "   Rectangular triangle with cateches 5(*)\n\n";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i > j || i == j)
			{
				cout << " *";
			}
		}
		cout << endl;
	}
}