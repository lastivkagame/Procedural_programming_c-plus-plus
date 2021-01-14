#include <iostream>
using namespace std;

int main()
{
	//14.Користувач вводить два числа. Перевірте, чи хоча б одне з них менше за число 100 (на екрані буде 1, якщо так).
	// Використовуйте оператори < і ||.

	int number1, number2, number3;

	cout << "enter number1,pls : ";
	cin >> number1;

	cout << "enter number2,pls : ";
	cin >> number2;

	cout << "\n0 - false\n";
	cout << "1 - true\n\n";

	cout << "Number1 < 100 or number2 < 100, isn't it\?\n";
	cout << "Answer: ";

	/*
	if (number1 == 100 && number2 == 100)   // це неописувалось в задачі але таке можливо то на нього треба вважати?
	{
		cout << "100 = 100\n";
	}
	else
	{
	*/
		cout << (number1 < 100 || number2 < 100) << endl;
	//}

}