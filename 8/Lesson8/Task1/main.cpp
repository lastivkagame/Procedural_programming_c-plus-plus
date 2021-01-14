#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Вивести на екран 30 рандомних чисел.

	srand(time(nullptr));

	for (int i = 0; i < 30; i++)
	{
		cout << rand() << endl;
	}

	system("pause");
	return 0;
}