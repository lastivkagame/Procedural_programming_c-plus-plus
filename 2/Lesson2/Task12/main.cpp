#include <iostream>
using namespace std;

int main() {
	/*12.���������� ������� � ��������� �� ������� ������������. ������� �� ����� �������� � �����,
	�������������� �� ����. ��� �������� ���� ����� �� ���� � ������ ����� (������� cin >> side1 >> side2).*/

	int sideRectangle1, sideRectangle2;

	cout << "enter please number(side(1) of rectangle): ";
	cin >> sideRectangle1;

	cout << "enter please number(side(2) of rectangle): ";
	cin >> sideRectangle2;

	int perimeterRectangle = (sideRectangle1 + sideRectangle2) * 2;
	int areaRectangle = sideRectangle1 * sideRectangle2;

	cout << "Perimeter Rectangle :" << perimeterRectangle << " cm\n";

	cout << "The area Rectangle :" << areaRectangle << " cm\n";

	system("pause");
	return 0;
}