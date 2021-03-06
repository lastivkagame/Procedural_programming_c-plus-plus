#include <iostream>
using namespace std;

//���� ������� ���������, �� ���� ���� �������� �� ��� �����, ��� � ��������� � ����������
void FuncA(int funcVariable);
void FuncB(const int funcConstant); //�������, ������� ��� �� ������� �������� ���������. �������� ���� ���������
                                    //���� ���, ��� ����������� ��� �� �������.

//��� �� �� ������, �� � ������� ����� �������� ���������

int main()
{
	int myVariable = 10;
	const int myConstant = 20;

	//�������, ������� �������� � ������� ��� �� ��������, �� ���� ����� ����������
	//� ��������� � �����.
	FuncA(myVariable); //� ������� ����������� �������� ����� (10).
	                   //������� �������� ������ �����, �������� ��� 10
	FuncA(myConstant); //� ������� ����������� �������� ��������� (20).
					   //������� �������� ������ �����, �������� ��� 20

	FuncB(myVariable); //� ������� ����������� �������� ����� (10).
					   //������� �������� ������ ���������, �������� ��� 10
	FuncB(myConstant); //� ������� ����������� �������� ��������� (20).
					   //������� �������� ������ ���������, �������� ��� 20

	//������� ���� ����� ������� �� � ��� ����������, � � ����, �� ������ ���������� ��������
	//���������� ������ ��������� ������� ������������. �� �� ��� �������������? ������ �������:
	//�������� �������, ��� �������� ����� �� �����. ���� ������. ������� �������� ��������:
	void Show(int arr[], int size); 

	//����������: ��, ��������� ����� ������ � � ��������, ��� �� �������� ����������� ����. ����
	//            ����� ��� ������? �� ������� ����������� ������ �������. ����� ������� ����� ���������
	//            ���� � �� �������, �� ���������� �� ��������. ��� �� ������ �� ����.

	//�������� �� ������� (���������� �� ����� �57)

	system("pause");
	return 0;
}

void FuncA(int funcVariable)
{
	cout << "I have own variable. Her value = " << funcVariable << endl;
}

void FuncB(const int funcConstant)
{
	cout << "I have own constant. Her value = " << funcConstant << endl;
}

//�������� �������� �� ����� �28.
void Show(int arr[], int size)
{
	//�������, �� ������ ��������� �������� � ��� �������:
	size = -2; //�� ��� ����� ��������� ������ (���������) ������ �������� ����� ������.
	           //� ���. ���� ��������� �� ����

	arr[size - 1] = 5; //����� ����� (���������) ������ �������� �������� ������ ����� ���, �� �������.
	                   //���� ������� ���� � ����� ������, ��� � ��� ������ ���� ��������� �������

	//��� �������, �� ��������� ��� ������� ���������. �� ������� ������ �� ����� ���. ��� �����
	//����� ������ ��������� � ��� �� ������, ��� ��� ������, ���� �� ���������� ��������� �������, � ���� ���������
	//������� (��������� �������� �������� ����� �������� �����, ��-�� ���� �������� ����������� ����������),
	//�� ���������, �� �� �������. �������� � ���������� ������� ������������� const, � �� ��������, �� ���������
	//��� ���������� �������. � ����� ������� � ����������� �� ���, ��� �� �� ������. ������ ���������� �� ��
	//�������, �� �� �������� �� ������� (�� ����� �������, �� �� ���������), ��� �� ������� � �� ��������
	//������������ � ������� � ��� ���. � ����� � ���� ����������� ������.

	//����������: ����� �������, �� ������� ���������, � �� ��. ��������� ��� ����� ������ - ������ �� � ��� ����������.
	//            � ���� ����� ��������� ����� ���������� ����������? ��� ������, �� ����� �������� ��� �������������
	//            const, � ���� ����� �������� ����������. � ����� �� ��� ����������, ���� ����� �� �������������

	//������� ������ �������. ����������, ���� �� ���� ��������
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//��������: � ������ �����, �� ��������� �������� ���� �������� �������. ��� ���� �� ������������
	//          �������� ������� � �����������, �� ����� ������ ���� ����� �������� �������. �� � �����
	//          �� const ������� ��� �������� ��������� �� �����, ��� �� ����� � ������� ���� ����������
	//          �� ����'������ ���������.
}