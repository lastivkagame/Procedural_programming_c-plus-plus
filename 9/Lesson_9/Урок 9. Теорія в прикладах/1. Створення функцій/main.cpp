#include <iostream>
using namespace std;

//������� - �� ���������� �����������, ��� ��'���� ��� �� ���� ��'�. ���������
//          ��� ����� ������� ��������� ����� ����곿.

//��������� ��������� �������:
/*
���_������������_�������� ��'�_�������(������_���������)
{
	������ ���
}
*/

//������ ������ ��������� �������: ��������� �� ������� main()

//1. ������� �� ������� ������� �������� (void), �� ��'� (ShowHello), �� �� ��������� (���� �����)
void ShowHello()
{
	cout << "Hello!\n";
}

//2.������� ������� �������� (int), �� ��'� (GetRandomNumber), �� �� ��������� (���� �����)
int GetRandomNumber()
{
	return rand();
}

//3. ������� ������� �������� (char), �� ��'� (ToSymbol), �� ���� ��������
char ToSymbol(int index)
{
	char symbol = index;
	return symbol;
}

//4. ������� �� ������� ������� �������� (void), �� ��'� (Square), �� ���� ��������
void ShowSquare(int number)
{
	cout << number << "^2 = " << number * number << endl;
}

//���������� 1: ���� ������� ������� ����� ��������, � �� ���� ����'������ �� ����
//              �������� return!

//���������� 2: ������� ���� �������� ���� ������� ��������� ������ ����, ���������:
void function(int a, int b, float c)
{
	/*������ ���*/
}

//���������� 3: ���� ���������� �������� ����곿 void, �� ����� ������ ������ return;
void SomeFuntion(int number)
{
	if (number == 0)
	{
		return; //�� ����� ����� ������� ������ ������� ��������� ���� ������
	}

	cout << "Your number = " << number << endl;
}

//����� ��� ������� main �� ����� �����:
//1. ���� ������� ������������ �������� (int � return 0)
//2. � �� � ��'� (main)
//3. ���� �� �� ��������� (���� �����)
//4. �� �� ��� ������� ��� (��� ������ ��������� �������� �����)
//5. �� ������� � �������� (����������� �������� ���� �����)
int main() 
{
	/*������ ���*/
	return 0;
}