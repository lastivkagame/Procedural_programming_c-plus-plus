#include <iostream>
#include <ctime>
using namespace std;
//��������� 
template <typename T> 
void Initialize(T arr[], int size); //���������� ������ ���������� ����������

template <typename T> 
void Show(T arr[], int size);       //����� ������������ ������

template <typename T> 
void InsertSort(T arr[], int size); //���������� ������������ ������

int main()
{
	setlocale(LC_ALL, "rus"); //���������� �������� ����
	srand(time(NULL));        //������� ����� ������

	const int SIZE = 20;
	int arr1[SIZE]; //����������� �����

	Initialize(arr1, SIZE); //����������

	cout << "���������� ������ �� ����������:\n";
	Show(arr1, SIZE);

	InsertSort(arr1, SIZE); //�������

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
void InsertSort(T arr[], int size) //���������� ������������ ������
{
	//������� ����� � ��������� �� ������� �������� ������
	int i;

	//������� ����� j ��������� ��������� ������� �� �-��������
	int j;

	//������� ����� temp ������ �������� ���� �������� ������ (����� 3 �������)
	T temp;

	//������� �� 0-������� ���������� � ����������� ������. ���� �������� � �������
	for (i = 1; i < size; i++)
	{
		//�����'������� �������� �-���� �������� (��� ���������)
		temp = arr[i];

		//������� ����������� ����� ��������� �� ��� ��������� ������������� ������� � ������
		//����, ���� � �� �������� ������� � ����������� ������� (���� ����������, ���� �� �������
		//�������� ��������, ��� ���� �� ���������� �� ��� ������������� ������
		for (j = i - 1; j >= 0 && arr[j] > temp; j--) 
			arr[j + 1] = arr[j];

		//ϳ��� ����� �������� ���� �������, ���� �������� � ����� �� ��������, ��� ��� �-��� �������
		arr[j + 1] = temp;
	}
}