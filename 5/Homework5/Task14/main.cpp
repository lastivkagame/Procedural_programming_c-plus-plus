#include <iostream>
using namespace std;

int main()
{
	// 14.� ������ � ������� �������� L. �� ����� ������� �������� �. ����������, �� ������ ������� ���� �,
	//�� � ������ �������. ��������� ������ ������� ���� ���� ������, ���� ����� � ������� ���� �� �쳺 
	//(��������������� ���� ���� � ��������� + ��� -)

	int L, P, pillows = 0;

	cout << "enter length,pls: ";
	cin >> L;

	cout << "enter length that you need,pls: ";
	cin >> P;

	while (P <= L)
	{
		pillows++;
		L -= P;
	}
	cout << "Seamstress can sew " << pillows << " pillows\n";

}