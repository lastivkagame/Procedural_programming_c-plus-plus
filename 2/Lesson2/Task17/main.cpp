#include <iostream>
using namespace std;

int main() {
	//17.	���������� ������� ����������� � �����. �������� �������� �� � ���������.

	double tempInCelsius;
	double tempInFahrenheit;

	cout << "enter temperature(in celsius): ";
	cin >> tempInCelsius;
	tempInFahrenheit = tempInCelsius * 1.8000 + 32.00;  //�� ������� F = x(������� ������) * 1.8000 +32.00
	cout << "This is " << tempInFahrenheit << "Fahrenheit\n";

	system("pause");
	return 0;
}