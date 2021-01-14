#include <iostream>
using namespace std;

int main()
{
	//5.Користувач вводить символ. Вивести його на екран 10 разів завдяки циклу for.

	char symbol;

	cout << "enter symbol,pls: ";
	cin >> symbol;

	for (int i = 0; i < 10; i++)
	{
		cout << symbol << " ";
	}
}