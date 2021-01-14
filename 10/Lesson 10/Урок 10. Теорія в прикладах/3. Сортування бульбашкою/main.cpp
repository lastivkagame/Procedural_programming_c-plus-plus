#include <iostream>
#include <ctime>
using namespace std;
//��������� 
template <typename T> 
void Initialize(T arr[], int size); //���������� ������ ���������� ����������

template <typename T>
void Show(T arr[], int size);       //����� ������������ ������

template <typename T>
void BubbleSort(T arr[], int size); //���������� ������������ ������

int main()
{
	setlocale(LC_ALL, "rus"); //���������� �������� ����
	srand(time(nullptr));     //������� ����� ������

	const int SIZE = 20;
	int arr1[SIZE]; //����������� �����

	Initialize(arr1, SIZE);

	cout << "���������� ������ �� ����������:\n";
	Show(arr1, SIZE);

	BubbleSort(arr1, SIZE); //�������

	cout << "���������� ������ ����� ����������:\n";
	Show(arr1, SIZE);

	system("pause");
	return 0;
}
template <typename T> 
void Initialize(T arr[], int size) //���������� ������ ���������� ����������
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 11 - 6; //-5...5
}
template <typename T> 
void Show(T arr[], int size) //����� ������������ ������
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}
template <typename T> 
void BubbleSort(T arr[], int size)
{
	//������� ����� � ��������� �� ������� �������� ������
	int i;

	//������� ����� j ��������� � i-��� ��������� ���������
	int j;

	//������� ����� temp ������ �������� ���� �������� ������ (����� 3 �������)
	T temp;

	//��������� �� ������� �������� (������� �����, ���� �������)
	for (i = 0; i < size; i++)
	{
		//������� ����������� ����� �������� ���������� � ���� (������� �����, ������ �����).
		//���� ����������� ����� ������ ������, �� ����� - �� ���� ���. � ���� � ���� �� ��������
		//"���������" (�������) ���������� ����� ������ (���� � ����� ������ �����).
		//����������: ����� �� ���� �� "�"-���� ����, ���� �� ���� ������� ����� �������
		//�� �-���� ������� �������� ���� ����� ������.
		for (j = size - 1; j > i; j--)
		{
			//����������: > - ���������� �� ���������, < - ���������� �� ���������
			if (arr[j - 1] > arr[j]) //���� ��������� ������� ������ �� ������...
			{
				//...̳����� �� ������
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
