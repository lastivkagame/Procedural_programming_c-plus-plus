#include <iostream>
using namespace std;
int main()
{
	// ������� �������, ���� ����� ��������� � ������� ������� �������.
	// � ������ ������� ������������ "\" - � �� ������� escape-�����������,
	// ����� ������������ ���������, �� ����� �� ����� �������.
	// ���� � ���� C:\MyFiles\I'm Stupid\Not really, ��:

	cout << "C:\MyFiles\I'm Stupid\Not really";     // ��� ����� �� ������ �������� ����
	cout << "C:\\MyFiles\\I\'m Stupid\\Not really"; // � ��� ������, ��� �� ������� �������

	// ���� ���� �������� RAW-�����, � ���x escape-����������� �� ��������.
	// ��������� RAW-�����: R"(��� �����)"
	cout << R"(C:\MyFiles\I'm Stupid\Not really)"; // ��� ������ ����� � ���������

	return 0;
}