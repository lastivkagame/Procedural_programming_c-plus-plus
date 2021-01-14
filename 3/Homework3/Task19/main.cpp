#include <iostream>
using namespace std;

int main()
{
	//19.« клав≥атури вводитьс€ число. ѕерев≥рити чи воно менше за 100 ≥ б≥льше за 0. якщо це так, 
	//то вивести на екран к≥льк≥сть цифр цього числа (€кщо число в≥д 1 до 9 Ц це одна цифра. якщо 10-99 Ц це дв≥ цифри)

	double userNumber;

	cout << "enter number,pls: ";
	cin >> userNumber;

	if (userNumber > 0 && userNumber < 100)
	{
		if (userNumber > 1 && userNumber < 9) 
		{
			cout << "That number have 1 digits\n";
		}
		else
		{
			cout << "That number have 2 digits\n";
		}
	}

}