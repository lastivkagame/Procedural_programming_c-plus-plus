/*3.������ ������� (William Wingate) �������� ������� ������� �����.
� ������ ����� �� ���������� ��������� ����������:
� ������������ �������� - ������������� �����, ������� ����� �������� �� ����� ��� ������ �����.
� ������� �����.
� ��� �����.
������������ ���������, ������� ����� ��������� ��� ��� ����������,
� �������� ���������, ������������ ����������� ���������� ����� ����.

��������� ������ ����������� � ������������ ���� ������� �� ������������� �����������
� ����� ���������� ��������� ����������. ���������� cin (��� ��� ������) � cout. */

#include <iostream>
using namespace std;

struct ServAnalysePizza
{
	char name[30];
	double diametr;
	double masa;
};

ServAnalysePizza fillStruct();
void printStruct(ServAnalysePizza williamWingate);

int main() {

	ServAnalysePizza williamWingate = fillStruct();
	printStruct(williamWingate);

	return 0;
}

ServAnalysePizza fillStruct()
{
	ServAnalysePizza williamWingate;

	cout << " - Enter name company, pls: ";
	cin.getline(williamWingate.name, 30);

	cout << " - Enter diametr of pizza, pls: ";
	cin >> williamWingate.diametr;


	cout << " - Enter masa of pizza, pls: ";
	cin >> williamWingate.masa;

	return williamWingate;
}

void printStruct(ServAnalysePizza williamWingate)
{
	cout << "   -Information-  \n";
	cout << "Name company: " << williamWingate.name << endl;
	cout << "Diametr of pizza: " << williamWingate.diametr << endl;
	cout << "Masa of pizza: " << williamWingate.masa << endl;
}