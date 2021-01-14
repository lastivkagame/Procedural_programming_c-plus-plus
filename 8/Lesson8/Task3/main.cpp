#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Вивести на екран 10 рандомних чисел, діапазон яких від - 20 до - 10 (включно).

	srand(time(nullptr));

	for (int i = 0; i < 10; i++)
	{
		cout << rand() % (-9 - -20) - 20;
		cout << endl;
	}

	system("pause");
	return 0;
}