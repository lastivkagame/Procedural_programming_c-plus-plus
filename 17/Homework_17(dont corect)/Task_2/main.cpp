/*Структури:
 - Задание 3: Реализовать структуру «Автомобиль» (марка, модель, объем двигателя,
мощность двигателя, диаметр колес, цвет, тип коробки передач). Создайте функции для задания
значений, отображения значений, поиска значений.*/

#include <iostream>
using namespace std;

struct car {
	string brand;
	string model;
	double engineVolume;    //объем двигателя,
	double enginePower;     //мощность двигателя
	string diameterWheels;   //диаметр колес
	string color;            //колір
	string gearboxType;      //тип коробки передач
};

void fillCar(car& p);
void printCar(car p);
void seachCar(car p);

int main() {

	car userCar;
	int choose;

	do {

		system("cls");

		cout << "\tCar\n";
		cout << " 1 - fill Struct\n";
		cout << " 2 - print Struct\n";
		cout << " 3 - seach\n";
		cout << " 4 - exit\n";

		cout << "Answer: ";
		cin >> choose;

		system("cls");

		switch (choose)
		{
		case 1:
			cout << "\tCar\n";
			fillCar(userCar);
			break;
		case 2:
			cout << "\tCar\n";
			printCar(userCar);
			break;
		case 3:
			cout << "\tCar\n";
			seachCar(userCar);
			break;
		case 4:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Inccorect direction!\n";
			break;
		}
	} while (choose != 4);

	return 0;
}

void fillCar(car& p)
{
	cout << " - enter brend: ";
	cin >> p.brand;

	cout << " - enter model: ";
	cin >> p.model;

	cout << " - enter engine volume,pls: ";
	cin >> p.engineVolume;

	cout << " - enter engine power,pls: ";
	cin >> p.enginePower;

	cout << " - enter diameter wheels,pls: ";
	cin >> p.diameterWheels;

	cout << " - enter color,pls: ";
	cin >> p.color;

	cout << " - enter gearbox type,pls: ";
	cin >> p.gearboxType;

	cout << endl;
	system("pause");
}

void printCar(car p)
{
	cout << " - brend: " << p.brand << endl;
	cout << " - model: " << p.model << endl;
	cout << " - engine volume: " << p.engineVolume << endl;
	cout << " - engine power: " << p.enginePower << endl;
	cout << " - diameter wheels: " << p.diameterWheels << endl;
	cout << " - color: " << p.color << endl;
	cout << " - gearbox type: " << p.gearboxType << endl;

	cout << endl;
	system("pause");
}

void seachCar(car p)
{
	int choose;

	cout << "What you need?Please choose\n";

	cout << " 1 - brend of car \n";
	cout << " 2 - model \n";
	cout << " 3 - engine volume \n";
	cout << " 4 - engine power \n";
	cout << " 5 - diameter wheels \n";
	cout << " 6 - color \n";
	cout << " 7 - gearbox type \n";
	cout << " 8 - exit \n";

	cout << "Answer: ";
	cin >> choose;

	system("cls");

	switch (choose)
	{
	case 1:
		cout << " - brend: " << p.brand << endl;
		break;
	case 2:
		cout << " - model: " << p.model << endl;
		break;
	case 3:
		cout << " - engine volume: " << p.engineVolume << endl;
		break;
	case 4:
		cout << " - engine power: " << p.enginePower << endl;
		break;
	case 5:
		cout << " - diameter wheels: " << p.diameterWheels << endl;
		break;
	case 6:
		cout << " - color: " << p.color << endl;
		break;
	case 7:
		cout << " - gearbox type: " << p.gearboxType << endl;
		break;
	case 8:
		break;
	default:
		cout << "Inccorect direction!\n";
		break;
	}

	system("pause");
}