#include <iostream>
using namespace std;

int main() {
	//З клавіатури вводиться оцінка (від 1 до 5). Проаналізуйте значення користувача в switch і в залежності від значення виведіть «Жахливо», «Погано», «Задовільно», «Добре», «Прекрасно».

	int evaluation;

	cout << "enter your evaluation,pls: ";
	cin >> evaluation;
	
	switch (evaluation)
	{
	case 1:
		cout << "terribly";
		break;
	case 2:
		cout << "bad";
		break;
	case 3:
		cout << "satisfactorily";
		break;
	case 4:
		cout << "good";
		break;
	case 5:
		cout << "fine";
		break;
	default:
		cout << "Incorrect direction";
		break;
	}
	cout << endl;

	system("pause");
	return 0;
}