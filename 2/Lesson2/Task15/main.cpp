#include <iostream>
using namespace std;

int main() {
	//15.	���������� ������� ������� � ��������� � �������� �������� �� � �����

	int faraongah;
	int yards;
	int price1faraongah = 220;

	cout << "enter distance in faraons: ";
	cin >> faraongah;
	yards = faraongah * price1faraongah;
	cout << "This is " << yards <<" yards\n";

	system("pause");
	return 0;
}