/*Задание 4: Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры). Необходимо создать третий
массив минимально возможного размера, в котором нужно собрать общие элементы двух массивов без повторений.*/

#include <iostream>
using namespace std;

void fillArr(int userArr[], int size);
void createNewArr(int userArrA[], int sizeA, int userArrB[], int sizeB);
void printArr(int userArr[], int size);

int main() {

	int M, N;

	cout << "Enter how many number in array A,pls: ";
	cin >> M;

	cout << "Enter how many number in array B,pls: ";
	cin >> N;

	int* A = new int[M], * B = new int[N];

	fillArr(A, M);
	fillArr(B, N);

	printArr(A, M);
	printArr(B, N);

	createNewArr(A, M, B, N);

	//delete[]A;
	//delete[]B;
}

void fillArr(int userArr[], int size)
{
	cout << "  Array \n ";

	for (int i = 0; i < size; i++)
	{
		cout << "Enter number (element " << i << " ), pls: ";
		cin >> userArr[i];
	}

	cout << endl;
}

void createNewArr(int userArrA[], int sizeA, int userArrB[], int sizeB)
{
	int k = 0, digits = 0;
	int* userArrAB = new int;
	bool flag = true;

	for (int i = 0; i < sizeA; i++)
	{
		for (int j = 0; j < sizeB; j++)
		{
			if (userArrA[i] == userArrB[j])
			{
				flag = true;
				break;
			}

			flag = false;
		}

		for (int h = 0; h < i; h++)
		{
			if (userArrA[i] == userArrA[h])
			{
				flag = false;
			}
		}

		if (flag)
		{
			userArrAB[k++] = userArrA[i];
			digits++;
		}

		flag = true;
	}

	printArr(userArrAB, digits);

	delete[]userArrA;
}

void printArr(int userArr[], int size)
{
	cout << "  Array \n{ ";

	for (int i = 0; i < size; i++)
	{
		cout << userArr[i] << " ";
	}

	cout << "} \n\n";
}