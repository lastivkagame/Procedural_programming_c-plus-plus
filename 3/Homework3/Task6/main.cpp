#include <iostream>
using namespace std;

int main()
{
	//Користувач вводить число. Виведіть на екран символ, індекс якого відповідає цьому числу, використовуючи приведення в стилі мови С++ (новому).

	int number;

	cout << "Enter number,pls : ";
	cin >> number;

	cout << "That is " << static_cast<char>(number) << endl;

	system("pause");
	return 0;
}