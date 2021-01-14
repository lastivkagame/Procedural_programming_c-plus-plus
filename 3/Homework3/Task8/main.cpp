#include <iostream>
using namespace std;

int main()
{
	//8. ористувач вводить число. якщо воно лежить в д≥апазон≥ 10Е99 Ц вивести на екран Ђ¬аше число маЇ 2 цифриї.

	int usersNumber;

	cout << "enter number,pls: ";
	cin >> usersNumber;

	if (10 <= usersNumber && usersNumber <= 99) 
	{
		cout << "Your number have 2 digits\n";
	}
	
	system("pause");
	return 0;
}