#include <iostream>
using namespace std;

int main() {
	/*11.���������� ������� � ��������� ������� ��������. ������� ��� ����� ���� � �������� ���� ������.
	������� �� ����� �������� � ����� �������� (�������������� ����� �� ����, �������� ���� ���������).*/

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