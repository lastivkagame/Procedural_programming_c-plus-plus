#include <iostream>
using namespace std;

int main()
{
	//11.��������� ���������� ���� �� ������, ���� ���������� ��������.
	// ��� ����� ����� ���� ������� ����� for �����������. ������ ��������� ���, ������� ������ ���, 
	//��� ���� � ������ �� �������, � � ��� ������ �� ����� ���� � ������ ����.

	int width = 5;          // ���� ��� ������� �����
	int step = 1;           // �������� \ �������� ������
	int count = 0;          //������� ������

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j < width / 2 - count || j > width / 2 + count)
			{
				cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}
		count += step;

		if (count == width / 2)
		{
			step = -1;
		}
		cout << endl;
	}
}