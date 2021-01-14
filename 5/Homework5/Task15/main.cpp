#include <iostream>
using namespace std;

int main()
{
	// 15.На складі є деяка кількість яблук (яка вводить користувач). На склад приїжджають машини, 
	//які забирають по 400 яблук кожна. Вивести на екран необхідну кількість машин, щоб очистити склад.

	int numberApple, car = 0;

	cout << "enter number(apple),pls: ";
	cin >> numberApple;

	while (numberApple > 0)
	{
		if ((numberApple < 400) && (numberApple != 0))
		{
			car++;
			numberApple -= numberApple;
		}
		else
		{

			numberApple -= 400;
			car++;
		}
	}

	cout << "We need " << car << " car if we want to pick up all the apples\n";
}