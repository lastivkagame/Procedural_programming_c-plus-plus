#include <iostream>
using namespace std;

int main()
{
	//Користувач вводить 2 ЦІЛИХ числа і ці значення записуються в дві змінні типу int. Поділіть значення однієї змінної на інше, і запишіть це в третю змінну-результат.
	//Результат має бути точним, з дробовою частиною (якщо вона є). Для цього використайте приведення в стилі С.

	int number1, number2;

	cout << "Enter number 1,pls : ";
	cin >> number1;

	cout << "Enter number 2,pls : ";
	cin >> number2;

	double result = number1 / (double)number2;

	cout << number1 <<"/"<< (double)number2<<" = "<< result << endl;

	system("pause");
	return 0;
}