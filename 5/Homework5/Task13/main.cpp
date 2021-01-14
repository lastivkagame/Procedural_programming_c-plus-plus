#include <iostream>
using namespace std;

int main()
{
	// 13.Користувач вводить число (обов’язково має бути додатне). Вивести на екран факторіал цього числа. 
	//Факторіал гугліть в неті. Це не складно. Факторіал числа N = 1*2*3*…*N.

	int number, product = 1;

	cout << "enter number,pls: ";
	cin >> number;

	while (number > 0)
	{
		product *= number;
		number--;
	}
	cout << "Dobytok all number " << product;
}