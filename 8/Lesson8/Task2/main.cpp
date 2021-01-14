#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Вивести на екран 20 рандомних чисел, діапазон яких від 0 до 100.

	srand(time(nullptr));

	for (int i = 0; i < 20; i++)
	{
		cout << rand() % 100;
		cout << endl;
	}

	system("pause");
	return 0;
}