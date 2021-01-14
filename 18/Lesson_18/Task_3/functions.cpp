#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

Stud fillStud()
{
	Stud st;

	const char* name[] = { "kolya","dasha","sasha","Dima","Roma","Maks" };
	const char* profil[] = { "designer","programer","admin","electic","some office worker","driver" };

	st.age = rand() % 25;

	for (int i = 0; i < 4; i++)
	{
		st.marks[i] = rand() % 12;
	}

	int number = rand() % 6;

	strcpy_s(st.spec, strlen(profil[number]) + 1, profil[number]);

	number = rand() % 6;

	strcpy_s(st.name, strlen(name[number]) + 1, name[number]);

	return st;
}

void printGroup(Group gr)
{
	for (int i = 0; i < 7; i++)
	{
		printStudent(gr, i);
	}
}

void printStudent(Group gr, int number)
{
	cout << " Student # " << number << endl;
	cout << "Name: " << gr.st->name << endl;
	cout << "Age: " << gr.st->age << endl;
	cout << "Spec: " << gr.st->spec << endl;

	cout << "Marks: ";
	for (int i = 0; i < 4; i++)
	{
		cout << gr.st->marks[i] << " ";
	}
	cout << endl;
	cout << endl;
}

double averageMarkStud(Stud st)
{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum += st.marks[i];
	}

	return (sum / 4);
}

double averageMarkGrop(Group gr)
{
	int sum = 0;

	for (int j = 0; j < 7; j++) {

		for (int i = 0; i < 4; i++)
		{
			sum += (gr.st[j].marks[i]);
		}
	}

	return (sum / 28);
}

Stud findStud(char studName[30], Group gr)
{
	bool flag;
	int number = -1;

	for (int j = 0; j < 7; j++)
	{
		//		strcmp()
		for (int i = 0; i < strlen(studName); i++)
		{
			if (studName[i] != gr.st[j].name[i])
			{
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}

		if (flag)
		{
			number = j;
			return gr.st[number];
		}

	}



}
