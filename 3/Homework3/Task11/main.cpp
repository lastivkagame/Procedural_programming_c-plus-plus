#include <iostream>
using namespace std;

int main()
{
	//11.Створіть змінні mariaCourse, clementinaCourse, tomCourse. Марія, Клементіна і Том навчаються на одну і 
	//тому ж курсі. Спитайте в Тома, який його курс. Після цього присвойте іншим змінним це значення (завдяки 
	//одному рядку і декільком операторам присвоєння). Виведіть «Марія ходить на Х курс. 
	//Том ходить на Х курс. Клементіна ходить на Х курс». Під буквою «Х» має бути це число.

	int mariaCourse, clementinaCourse, tomCourse;

	cout << "Tom, enter number your course,pls: ";
	cin >> tomCourse;

	mariaCourse = clementinaCourse = tomCourse;

	cout << " Maria going to the " << mariaCourse << " course\n";
	cout << " Tom going to the " << tomCourse << " course\n";
	cout << " Clementina going to the " << clementinaCourse << " course\n";

}