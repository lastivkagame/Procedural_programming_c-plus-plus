#include <iostream>
using namespace std;

int main() {

	char stroka2[150];

	cout << "Enter radok 2: ";
	cin.getline(stroka2, 150);

	cout << "Dont free: " << strlen(stroka2) << endl;
	cout << "Free: " << 150 - (strlen(stroka2)) << endl;

	system("pause");
	return 0;
}