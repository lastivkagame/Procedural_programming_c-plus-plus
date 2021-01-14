#include <iostream>
using namespace std;

int bringToPower(int number, int power);

int main()
{
	//«адание 1: Ќаписать функцию, котора€ принимает два параметра : основание степени и 
	//показатель степени, и вычисл€ет степень числа на основе полученных данных.

	int number, power;

	cout << "Ennter number, pls: ";
	cin >> number;

	cout << "Enter the power of the number, pls: ";
	cin >> power;

	cout << number << " ^ " << power << " = " << bringToPower(number, power) << endl;

	return 0;
}

int bringToPower(int number, int power)
{
	int numb = 1;

	for (int i = 0; i < power; i++) 
	{
		numb *= number;
	}

	return numb;
}