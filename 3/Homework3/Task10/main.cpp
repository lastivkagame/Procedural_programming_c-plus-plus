#include <iostream>
using namespace std;

int main()
{
	//10.Створіть змінну userAge. Попросіть в користувача ввести його вік. Дайте ввести. Виведіть на екран його вік,
	// а потім збільште значення змінної завдяки інкременту, виведіть повідомлення «Вітаємо з днем народження» і
	// виведіть новий вік.

	int userAge;

	cout << "enter your age,pls: ";
	cin >> userAge;
	cout << "Your age : " << userAge << endl;

	userAge++;
	cout << "Happy Birthday\!\n";
	cout << "Your age : " << userAge << endl;

}