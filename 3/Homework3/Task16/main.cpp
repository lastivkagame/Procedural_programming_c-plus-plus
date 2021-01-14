#include <iostream>
using namespace std;

int main()
{
	//16. ористувач вводить з клав≥атури св≥й в≥к та в≥к своЇњ сестри.
	// якщо числа однаков≥ Ц вивести на екран пов≥домленн€ Ђможливо ви близнюки?ї. ¬икористовувати if

	int userAge, usersSisterAge;

	cout << "Enter your age,pls: ";
	cin >> userAge;

	cout << "Enter age your sister age,pls: ";
	cin >> usersSisterAge;

	if (userAge == usersSisterAge)
	{
		cout << "Perhaps you and your sister are twins?\n";
	}

}