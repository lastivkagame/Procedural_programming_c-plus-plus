#include <iostream>
using namespace std;

int main() {
	/*14.���������� ������� � ��������� ������� �������. ������� �� �����, ������ �� � ������, ������� � ����.
	����� �������� � �� �����. �� �������� ��� ��������� ����� (���_�_����, ���_�_������ � �.�.).*/

	int hryvnias;
	
	cout << "enter sum(in hryvnias),please: ";
	cin >> hryvnias;

	const double priceRublesIn1Hrn = 2.40;
	const double priceDollar = 27.11;
	const double priceEuro = 30.48;

	double allRubles = hryvnias * priceRublesIn1Hrn;
	double allDollars = hryvnias/priceDollar;
	double allEuros = hryvnias/priceEuro;

	cout << "This is : " << allRubles << " rubles \n";
	cout << "This is : " << allDollars << " dollars \n";
	cout << "This is : " << allEuros << " euros \n";

	system("pause");
	return 0;
}