/* ������� 5:
��������� ��������� � �������� �������������, ���������� ���� �����, ��������� �
����������.*/

#include <iostream>
using namespace std;

int main() {

	int b;

	cout << "Enter number, pls: ";
	cin >> b;

	int* pb = &b;

	//���������
	if (0 > * pb)
	{
		cout << " 0 > b \n";
		cout << " 0 > " << *pb << endl;
		cout << " Number sign is minus(-)\n";
	}
	else if (0 < *pb)
	{
		cout << " 0 < b \n";
		cout << " 0 < " << *pb << endl;
		cout << " Number sign is plus(+)\n";
	}
	else
	{
		cout << "Your number is 0\n";
		cout << *pb << " = 0";
	}

	return 0;
}