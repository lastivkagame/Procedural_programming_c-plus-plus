#include <iostream>
using namespace std;

void showCard(char suit, char number);

int main()
{
	//Задание 4: Написать функцию, выводящую на экран переданную ей игральную карту.

	int suit, number;
	char chSuit, chNumber;

	char charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };

	//@ - Hearts(♥)
	//# - Diamonds(♦)
	//$ - Clubs(♣)
	//& - Spades(♠)

	char suitCard[4] = { '@','#','$','&' };

	cout << " _Your card_ \n";

	//вибір масті
	cout << " --- Suit --- \n";
	cout << "  1 - Hearts(@)\n";
	cout << "  2 - Diamonds(#)\n";
	cout << "  3 - Clubs($)\n";
	cout << "  4 - Spades(&)\n";
	cout << "Please enter suit: _\b";
	cin >> suit;

	if (suit < 1 || suit > 4)
	{
		cout << "Incorrect direction!\n";
	}
	else
	{
		//вибір карти
		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 ";
		cout << "- Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
		cout << "Your answer: __\b\b";
		cin >> number;

		if (number < 1 || number > 13)
		{
			cout << "Incorrect direction!\n";
		}
		else
		{
			suit--;       // бо в масиві рахунок ведеться від 0
			number--;     // бо в масиві рахунок ведеться від 0

			chSuit = suitCard[suit];
			chNumber = charCard[number];

			cout << "_Your card_ \n";
			showCard(chSuit, chNumber);
		}
	}

	return 0;
}

void showCard(char suit, char number)
{
	for (int i = 0; i < 11; i++)
	{
		cout << "-";
	}
	cout << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << "|";

		if (i == 0)   //зверху обозначення масті
		{
			cout << suit;
			cout << "        ";
		}
		else if (i == 6) //знизу обозначення масті
		{
			cout << "        ";
			cout << suit;
		}
		else if (i == 3)
		{
			cout << "    ";
			if (number == '0')
			{
				cout << "10   ";
			}
			else
			{
				cout << number;
				cout << "    ";
			}
		}
		else
		{
			cout << "         ";
		}

		cout << "|";
		cout << endl;
	}

	for (int i = 0; i < 11; i++)
	{
		cout << "-";
	}
	cout << endl;
}