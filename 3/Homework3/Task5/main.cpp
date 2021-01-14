#include <iostream>
using namespace std;

int main()
{
	//Користувач вводить символ з клавіатури. Виведіть на екран індекс цього символу завдяки приведенню в стилі мови С++ (старому).

	char symbol;

	cout << "Enter symbol,pls : ";
	cin >> symbol;

	cout << "Your symbol have index -  " << int(symbol) << endl;

	system("pause");
	return 0;
}