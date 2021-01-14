#include <iostream>
using namespace std;

int main()
{
	//9. ористувач вводить число. якщо воно лежить в д≥апазонах 1Е9 або 100Е999 Ц вивести на екран 
	//пов≥домленн€ Ђ¬аше число маЇ 1 або 3 цифриї.

	int usersNumber;

	cout << "enter number,pls: ";
	cin >> usersNumber;

	if ((1 <= usersNumber && usersNumber <= 9) || (100 <= usersNumber && usersNumber <= 999)) 
	{
		cout << "Your number have 1 or 3 digits\n";
	}

	system("pause");
	return 0;
}