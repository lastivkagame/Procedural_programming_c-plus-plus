/*#include <iostream>
using namespace std;

int main() {
	/*
	setlocale(LC_CTYPE, "ukr");

	cout << " Вітаю вас з днем вчителя! \n";
	cout << " Я рада що в мене є такий вчитель як ви \n";
	cout << "\t Дякую вам за все! \n";
	

	int a = 96;
	int b = 238;
	int c = 238;

	int res = b ^ c & a << 2 | ~c;
	cout << "res: " << res << endl;

	return 0;
}*/

//#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <windows.h>


using namespace std;

int main()
{

	const int N = 5;
	int A[N][N], B[N][N];
	int a;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Sleep(rand() % 300 + 200);
			a = rand() % 10;
			if (a % 2 == 0) {
				A[i][j] = 1;
			}
			else {
				A[i][j] = 0;
			}
			A[i][j];
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "\n\n";
	a = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a = 0;
			if (A[i][j] == 1) { a++; }
			if (A[i][j - 1] == 1 && j > 0) { a++; }
			if (A[i][j + 1] == 1 && j < N) { a++; }
			if (A[i - 1][j] == 1 && i > 0) { a++; }
			if (A[i + 1][j] == 1 && i < N) { a++; }
			if (A[i - 1][j - 1] == 1 && i > 0 && j > 0) { a++; }
			if (A[i - 1][j + 1] == 1 && i > 0 && j < N) { a++; }
			if (A[i + 1][j - 1] == 1 && i < N && j > 0) { a++; }
			if (A[i + 1][j + 1] == 1 && i < N && j < N) { a++; }
			B[i][j] = a;
			cout << B[i][j] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}