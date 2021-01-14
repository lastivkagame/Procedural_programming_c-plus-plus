#include <iostream>
using namespace std;

int main()
{
	//13.Користувач вводить три числа. Перевірте чи ці числа між собою рівні (на екрані буде 1, якщо так). 
	//Використовуйте оператори == і &&..

	int number1, number2, number3;

	cout << "enter number1,pls : ";
	cin >> number1;

	cout << "enter number2,pls : ";
	cin >> number2;

	cout << "enter number3,pls : ";
	cin >> number3;

	cout << "\n0 - false\n";
	cout << "1 - true\n\n";

	 cout << "Number1 = number2 = number3, isn't it\?\n";
	 cout << "Answer: ";
	 cout << (number1 == number2 && number2 == number3 && number1 == number3) << endl; 

}