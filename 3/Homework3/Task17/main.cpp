#include <iostream>
using namespace std;

int main()
{
	//17.З клавіатури вводиться символ. Визначити чи це цифра. Використовувати if+else

	char symbol;

	cout << "Enter symbol or number,pls : ";
	cin >> symbol;

	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
	{
		cout << "That's is sybol(A-Z,a--z)\n";
	}
	else if (symbol >= '0' && symbol <= '9')
	{
		cout << "That's is number\n";
	}
		
	else 
	{
		cout << "I's something else(neither letter nor number)\n";
	}

}