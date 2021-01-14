#include <iostream>

using namespace std;

//��������� 
void Show(int arr[], int size); //����� ������

template<typename T> 
bool LinearSeacrh1(T arr[], int size, T key); //������ ����� (������ ������)

template<typename T> 
int LinearSearch2(T arr[], int size, T key);  //������ ����� (������ ������)

int main()
{
	setlocale(LC_ALL, "rus"); //���������� �������� ����

	const int SIZE = 7;
	int arr[SIZE]{ 2,3,1,8,5,1,0 }; //� ������ �����
	int key;                        //��������, ��� �������� ���������� � �����

	Show(arr, SIZE); //����� ������

	//������ ��в���
	cout << "������ ������� ������:\n";

	cout << "������� ��������: ";
	cin >> key;

	if (LinearSeacrh1(arr, SIZE, key))
		cout << "�������!\n";
	else
		cout << "�� ������� :(\n";

	//������ ��в���
	cout << "������ ������� ������:\n";
	int index;
	cout << "������� ��������: ";
	cin >> key;

	index = LinearSearch2(arr, SIZE, key);

	if (index != 0)
		cout << "�������! ��� " << index << " �������!\n";
	else
		cout << "�� ������� :(\n";

	system("pause");
	return 0;
}
void Show(int arr[], int size) //����� ������
{
	cout << "Array:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

//���� �������: ���� �������� �������� � ����� - ������� ������� TRUE
template<typename T> 
bool LinearSeacrh1(T arr[], int size, T key) //������ �����
{
	for (int i = 0; i < size; i++)
		if (key == arr[i]) //���� �������� ��������
			return true;

	//���� �������� �� �������
	return false;
}

//���� �������: ���� �������� �������� � ����� - ������� ������� ������ ��������
template<typename T> 
int LinearSearch2(T arr[], int size, T key)//������ �����
{
	for (int i = 0; i < size; i++)
	{
		if (key == arr[i]) //���� �������� ��������
		{
			return i + 1; //����������� ������ ������� ��������� �������� (+1 ��� ������ �����������)
		}
	}
	return 0; //���� �������� �� ��������
}
