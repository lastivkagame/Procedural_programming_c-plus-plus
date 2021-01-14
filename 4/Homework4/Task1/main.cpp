#include <iostream>
using namespace std;

int main() {
	//Створіть перечислення Vehicle (транспортний засіб), яке має константи: Truck (грузовик), Jeep (Джип), Tank (Танк). Створіть змінну цього перечислення. 
	//Задайте їй значення одного із констант.

	enum Vehicle{ TRUCK = 1, JEEP = 2, TANK = 3 };

	Vehicle myTranstort = JEEP;
	
	system("pause");
	return 0;
}