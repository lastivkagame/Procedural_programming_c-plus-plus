#include <iostream>
using namespace std;

int main()
{
	//15.Змініть попередню задачу так, щоб при правді на екран вивелось 0. Достатньо використовувати оператор !.

	int number1, number2, number3;

	cout << "enter number1,pls : ";
	cin >> number1;

	cout << "enter number2,pls : ";
	cin >> number2;

	cout << "\n0 - true\n";
	cout << "1 - false\n\n";

	cout << "Number1 < 100 or number2 < 100, isn't it\?\n";
	cout << "Answer: ";

	if (number1 == 100 && number2 == 100)
	{
		cout << "100 = 100\n";
	}
	else
	{
		cout << !(number1 < 100 || number2 < 100) << endl;
	}

}