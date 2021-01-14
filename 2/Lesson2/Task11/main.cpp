#include <iostream>
using namespace std;

int main() {
	/*11.Користувач вводить з клавіатури сторону квадрата. Створіть для цього зміну і попросіть його ввести.
	Виведіть на екран периметр і площу квадрата (використовуючи також дві змінні, значення яких порахуйте).*/

	int sideQuadrate;

	cout << "enter please number(side of quadrate): ";
	cin >> sideQuadrate;

	int perimeterQuadrate = sideQuadrate * 4;
	int areaQuadrate = sideQuadrate * sideQuadrate;

	cout << "Perimeter Quadrate :" << perimeterQuadrate << " cm\n";

	cout << "The area Quadrate :" << areaQuadrate << " cm\n";

	system("pause");
	return 0;
}