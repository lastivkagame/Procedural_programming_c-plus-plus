#include <iostream>
using namespace std;

int main()
{
	// 14.У швачки є тканина довжиною L. Їй треба подушки довжиною Р. Домовимось, що ширина тканини така ж,
	//як і ширина подушки. Визначити скільки подушок вона може пошити, якщо ділити і множити вона не вміє 
	//(використовувати лише цикл і оператори + або -)

	int L, P, pillows = 0;

	cout << "enter length,pls: ";
	cin >> L;

	cout << "enter length that you need,pls: ";
	cin >> P;

	while (P <= L)
	{
		pillows++;
		L -= P;
	}
	cout << "Seamstress can sew " << pillows << " pillows\n";

}