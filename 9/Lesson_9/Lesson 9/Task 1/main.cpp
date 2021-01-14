#include <iostream>
#include <ctime>
using namespace std;

int arithmeticMean(int b, int c);
int min(int b, int c);
int max(int b, int c);
bool rivne(int b, int c);

int main()
{
	// Function that return min of 2 numbers

	setlocale(LC_ALL, "ua");

	int number1, number2;

	cout << "Enter number 1: ";
	cin >> number1;
	
	cout << "Enter number 2: ";
	cin >> number2;

	cout << "Final(arithmetic mean): " << arithmeticMean(number1, number2) << endl;
	cout << "Final(min): " << min(number1, number2) << endl;
	cout << "Final(max): " << max(number1, number2) << endl;
	cout << "Final( a = b): " << rivne(number1, number2) << endl;

	system("pause");
	return 0;
}

int arithmeticMean(int b, int c)
{
	return (b + c) / 2;
}

int min(int b, int c)
{
	if (b < c)
	{
		return b;
	}
	else
	{
		return c;

	}
}

int max(int b, int c)
{
	if (b > c)
	{
		return b;
	}
	else
	{
		return c;

	}
}

bool rivne(int b, int c)
{
	if (b == c ) 
	{
		return true;
	}
	else
	{
		return false;
	}
}
