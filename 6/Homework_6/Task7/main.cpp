#include <iostream>
using namespace std;

int main()
{
	//7.Завдяки двом циклам for намалюйте на екрані прямокутник, який заповнений зірочками розміром 10 на 5.

	cout << "      Rectangle 10 on 5\n\n";

	for (int i = 0; i < 5; i++)
	{
		cout << " * ";
		for (int b = 1; b < 10; b++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}