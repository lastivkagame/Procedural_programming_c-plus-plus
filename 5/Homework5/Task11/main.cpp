#include <iostream>
using namespace std;

int main()
{
	// 11.Та сама задача, тільки на екран виводиться кількість цифр в числі а не самі цифри.
	//Поміняйте while на do while і зробіть так щоб враховувався 0 і від’ємні числа.

	int number1, numberDigits = 0;

	cout << "enter number 1,pls : ";
	cin >> number1;

	do
	{
		numberDigits++;
		number1 /= 10;

	} while (number1 != 0);

	cout << "Your number have : " << numberDigits << " digits" << endl;
}