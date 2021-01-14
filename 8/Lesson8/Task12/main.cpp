#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//12.Створити гру «Любить, не любить». Гравець вказує кількість пелюсток квітки і на екрані виводиться «любить,
	// не любить, любить, не любить…» і так далі, поки не дійде до останньої пелюстки. Чи починати з «любить», 
	//чи з «не любить» хай вирішує рандом.

	srand(time(nullptr));

	int number, love; // lov - для визначення з чого починати love or not love

	cout << "\tLove or not love \?\n";

	cout << "Enter the number of petals on the flower: ";
	cin >> number;

	love = rand() % 2;

	for (int i = 0; i < number; i++)
	{
		if (love == 0)
		{
			cout << "  love  ";
			love++;
		}
		else
		{
			cout << " not love ";
			love--;
		}
	}

	cout << endl;

	system("pause");
	return 0;
}