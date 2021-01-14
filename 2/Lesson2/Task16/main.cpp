#include <iostream>
using namespace std;

int main() {
	//16.	 ористувач вводить св≥й в≥к в роках. ѕрограма виводить на екран його в≥к в м≥с€ц€х.

	int user_age;
	int ageMonth;
	cout << "enter your age,please: ";
	cin >> user_age;
	ageMonth = user_age * 12;
	cout << "You have lived " << ageMonth << " months\n";
	
	system("pause");
	return 0;
}