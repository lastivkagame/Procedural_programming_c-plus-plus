#include <iostream>
using namespace std;

int main() {
	//16.	���������� ������� ��� �� � �����. �������� �������� �� ����� ���� �� � ������.

	int user_age;
	int ageMonth;
	cout << "enter your age,please: ";
	cin >> user_age;
	ageMonth = user_age * 12;
	cout << "You have lived " << ageMonth << " months\n";
	
	system("pause");
	return 0;
}