#include <iostream>
using namespace std;

int main()
{
	//11.Спробуйте намалювати ромб із зірочок, який заповнений всередині.
	// Для цього треба буде декілька циклів for використати. Висоту вибирайте самі, головне зробіть так, 
	//щоб якщо я захотів її поміняти, і в коді поміняв це число лише в одному місці.

	int width = 5;          // будь яке непарне число
	int step = 1;           // збільшеня \ зменшеня зірочок
	int count = 0;          //кількість зірочок

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j < width / 2 - count || j > width / 2 + count)
			{
				cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}
		count += step;

		if (count == width / 2)
		{
			step = -1;
		}
		cout << endl;
	}
}