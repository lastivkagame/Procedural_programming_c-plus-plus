#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

float min(int b, int c);
float max(int b, int c);
bool rivne(int b, int c);

int main()
{
	int a, b, c;
	int vuraz1, vuraz2, vuraz3;

	cout << "Enter number a: ";
	cin >> a;

	cout << "Enter number b: ";
	cin >> b;
	
	cout << "Enter number c: ";
	cin >> c;

	vuraz1 = min(b, c) + max(b - a, c + 1) + min(pow(b, 2) + a, pow(c, 3));

	cout << "min(b, c) + max(b - a, c + 1) + min(pow(b, 2) + a, pow(c, 3)) = " << vuraz1 << endl;

	system("pause");
	return 0;
}


float min(int b, int c)
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

float max(int b, int c)
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
	if (b == c)
	{
		return true;
	}
	else
	{
		return false;
	}
}
