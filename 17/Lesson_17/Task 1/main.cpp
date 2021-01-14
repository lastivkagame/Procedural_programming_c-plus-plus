#include <iostream>
#include <string>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct person {
	date birth;
	string name;
	string lastname;
	int mark[4];
};

void show(person p);
person fill();

int userAge(int age);

int main(){

	person p1, p2, p3, p4;

	p1 = fill();
	p2 = fill();
	p3 = fill();
	p4 = fill();


	person arrP[4] = { p1,p2,p3,p4 };

	for (int i = 0; i < 4; i++)
	{
		cout << "\tPerson #" << i << " : " << endl;
		show(arrP[i]);
	}

	//person p4 = fill();
	//show(fill());

	//cout << "Your age - " << userAge(p4.birth.year) << endl;

	/*cout << "Age - "<< p1.age << endl;
	cout << "Name - "<< p1.name << endl;
	cout << "Lastname - "<< p1.lastname << endl;

	person p2;

	cout << "\tPerson 2\n";

	cout << "Enter your age,pls: ";
	cin >> p2.age;

	cout << "Enter your name,pls: ";
	cin >> p2.name;

	cout << "Enter your lastname,pls: ";
	cin >> p2.lastname;

	cout << "Age - " << p2.age << endl;
	cout << "Name - " << p2.name << endl;
	cout << "Lastname - " << p2.lastname << endl;

	cout << "Person 3\n";
	person p3 = p1;
	cout << p3.age << endl;
	cout << p3.name << endl;
	cout << p3.lastname << endl;

	p3.age = 28;

	cout << "P1: " << p1.age << endl;*/

	system("pause");
	return 0;
}

void show(person p)
{
	cout << "Name:" << p.name << endl;
	cout << "LastName:" << p.lastname << endl;
	cout << "Your date birth: ";
	cout << p.birth.day << "." << p.birth.month << "." << p.birth.year << endl;

	cout << "Your marks: ";
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter mark # " << i << " : " << p.mark[i];
	}
}

person fill()
{
	person p5;

	cout << "Enter your birth,pls:\n ";
	cout << "Day: ";
	cin >> p5.birth.day;

	cout << "Month: ";
	cin >> p5.birth.month;

	cout << "Year: ";
	cin >> p5.birth.year;

	cout << "Enter your name,pls: ";
	cin >> p5.name;

	cout << "Enter your lastname,pls: ";
	cin >> p5.lastname;

	cout << "Enter your marks: ";
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter mark # " << i << " : ";
		cin >> p5.mark[i];
	}

	return p5;
}

int userAge(int age)
{
	return (2019 - age);
}
