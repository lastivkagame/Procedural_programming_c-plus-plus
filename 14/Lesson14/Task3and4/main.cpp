#include <iostream>
using namespace std;

int main() {
	int m, n, j = 0;
	char stroka3[150];
	char stroka4[150];


	cout << "Enter radok 3: ";
	cin.getline(stroka3, 150);

	cout << "Enter intex m(start): ";
	cin >> m;

	cout << "Enter intex n(end): ";
	cin >> n;

	for (int i = m - 1; i < n; i++)
	{
		cout << stroka3[i];

		stroka4[j] = stroka3[i];
		j++;

		if (i == (n - 1))
		{
			stroka4[j] = '\0';
		}
	}

	cout << endl;

	cout << "Stroka4: ";
	cout << stroka4 << endl;


	char *stroka5 = new char[n - m + 1];

	for (int i = m - 1, t = 0; i < n; i++)
	{
		stroka5[t++] = stroka3[i];

		if (i == (n - 1))
		{
			stroka5[j] = '\0';
		}
	}

	strcpy_s(stroka3, strlen(stroka5) + 1, stroka5);

	cout << "Stroka 3 : " << stroka3 << endl;

	system("pause");
	return 0;
}