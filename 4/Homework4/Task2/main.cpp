#include <iostream>
using namespace std;

int main() {
	//Створіть перечислення Light (лампа), яка має константи OFF (виключена), ON (включена). Створіть змінну цього перечислення.
	// Спочатку лампа виключена. Спитайте в користувача чи треба включити світло. Якщо він введе число 1, то «включіть» лампу. 
	//Якщо 0 – виключте. Після цього в switch проаналізуйте «стан» лампи і якщо вона включена, виведіть «Світло включене», інакше «виключене».

	enum Light { OFF = 0,ON = 1 };

	Light lamp = ON;
	int choose;

	cout << "enter 1 if you need\n";
	cout << "enter 0 if you don't need\n";
	cout << "Do you want turn on lamp?\n";
	cin >> choose;

	if (choose == 1)
	{
		lamp = ON;
	}
	else if(choose == 0)
	{
		lamp = OFF;
	}
	else
	{
		cout << "Incorrect direction";
	}

	switch (lamp)
	{
	case ON:
		cout << "light is on\n";
		break;
	case OFF:
		cout << "light is off\n";
		break;
	default:
		cout << "Incorrect direction";
		break;
	}

	system("pause");
	return 0;
}