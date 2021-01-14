#include <iostream>
using namespace std;

int main()
{
	//Створити 2 масиви. Їх розмір різний (самі вибирайте). Завдяки списковій ініціалізації заповніть обидва масиви.
	// Завдяки циклам виведіть їх обидва, найдіть їх суму, порівняйте суми і виведіть більшу.

	const int SIZE_4 = 4;
	int arr4[SIZE_4] = { 4,20,1,8 };

	const int SIZE_5 = 5;
	int arr5[SIZE_5] = { 12,3,5,8,10 };

	int sum1 = 0, sum2 = 0;

	cout << "Array whith 4 number\n";

	for (int i = 0; i < SIZE_4; i++)
	{
		cout << "Element number # " << i + 1 << " is " << arr4[i] << endl;
		sum1 += arr4[i];
	}

	cout << "Array whith 5 number\n";

	for (int i = 0; i < SIZE_5; i++)
	{
		cout << "Element number # " << i + 1 << " is " << arr5[i] << endl;
		sum2 += arr5[i];
	}

	if (sum1 > sum2)
	{
		cout << "Sum number in array with 4 numbers is bigger. Sum : " << sum1 << endl;
	}
	else if (sum1 < sum2)
	{
		cout << "Sum number in array with 5 numbers is bigger. Sum : " << sum2 << endl;
	}
	else
	{
		cout << "Sum number in array with 4 numbers = Sum number in array with 5 numbers\n";
	}

	system("pause");
	return 0;
}