#include <iostream>
using namespace std;

int main()
{
	//Переробіть задачу №4 добавивши врахування помилки, якщо друге число 0 (на 0 ділити не можна) завдяки оператору if.

	int number1, number2;

	cout << "Enter number 1,pls : ";
	cin >> number1;

	cout << "Enter number 2,pls : ";
	cin >> number2; 

	if(number2 == 0)
	{
		cout << "\n You can't divide by  0\n";
		cout << " You must enter other number\n\n";
	}
	else {
		double result = number1 / (double)number2;
		cout << number1 << "/" << (double)number2 << " = " << result << endl;
		}

	system("pause");
	return 0;
}