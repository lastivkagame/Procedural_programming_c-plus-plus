#include <iostream>
using namespace std;

int main()
{
	//11.������� ���� mariaCourse, clementinaCourse, tomCourse. ����, ��������� � ��� ���������� �� ���� � 
	//���� � ����. �������� � ����, ���� ���� ����. ϳ��� ����� ��������� ����� ������ �� �������� (������� 
	//������ ����� � �������� ���������� ���������). ������� ����� ������ �� � ����. 
	//��� ������ �� � ����. ��������� ������ �� � ����. ϳ� ������ �ջ �� ���� �� �����.

	int mariaCourse, clementinaCourse, tomCourse;

	cout << "Tom, enter number your course,pls: ";
	cin >> tomCourse;

	mariaCourse = clementinaCourse = tomCourse;

	cout << " Maria going to the " << mariaCourse << " course\n";
	cout << " Tom going to the " << tomCourse << " course\n";
	cout << " Clementina going to the " << clementinaCourse << " course\n";

}