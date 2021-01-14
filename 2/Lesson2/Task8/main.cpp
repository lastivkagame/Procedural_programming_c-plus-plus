#include <iostream>
using namespace std;

int main() {
	/*8.Ви створили проект, в якому написали всі попередні задачі. 
	Виведіть на екран шлях до цього проекту, використовуючи спочатку простий рядок, а потім RAW.*/

	cout << "Simple line - C:\\Users\\user.itstep.000\\Desktop\\Lesson2\\x64\\Debug\\Task8.exe\n";
	cout << R"(Raw line - C:\Users\user.itstep.000\Desktop\Lesson2\x64\Debug\Task6.exe)" << endl; 

	system("pause");
	return 0;
}