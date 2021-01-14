#include <iostream>
#include <Windows.h>
#include <ctime>

#include"functions.h"
using namespace std;

struct Stud {
	char name[30];
	int age;
	char *spec = new char[30];
	int marks[4];
};

struct Group {
	Stud st[7];
	int number;
};

Stud fillStud();

void printGroup(Group gr);
void printStudent(Group gr, int number);

double averageMarkStud(Stud st);
double averageMarkGrop(Group gr);

Stud findStud(char studName[30], Group gr);
int main() {

	srand(time(0));
	Group StudentsGroup;

	for (int i = 0; i < 7; i++)
	{
		StudentsGroup.st[i] = fillStud();
		StudentsGroup.number = i + 1;
	}

	printGroup(StudentsGroup);

	int k = 1;

	for (int i = 0; i < 7; i++)
	{
		cout << "Avegage Mark of Student #" << k++ << " : " << averageMarkStud(StudentsGroup.st[i]) << endl;
	}

	cout << "Average Mark Group: " << averageMarkGrop(StudentsGroup) << endl;



	system("pause");
	return 0;
}
