#include <iostream>
using namespace std;

int main()
{
	// Давайте представимо що мені треба дістати вік з кожної моєї групи в ШАГу. Представимо
	// що в мене їх 5. В кожній групі 10 людей. Кожний має ввести значення. Як написати такий код?
	const int PEOPLE = 10;
	int group1[PEOPLE], group2[PEOPLE], group3[PEOPLE], group4[PEOPLE], group5[PEOPLE];

	cout << "Group #1\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group1[i];
	}

	cout << "Group #2\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group2[i];
	}

	cout << "Group #3\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group3[i];
	}

	cout << "Group #4\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group4[i];
	}

	cout << "Group #5\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> group5[i];
	}

	// Ви відчуваєте як це не зручно? А виводить їх тоже 5 циклами? А якщо треба одну групу добавити?
	// Ми могли би не тільки об'єднати студентів в одну групу, але й групи об'єднати в масив.

	// І тут в хід вступають багатовимірні масиви. Наприклад двовимірний масив.
	// Двовимірний масив - це масив, кожний елемент якого - це масив.

	// Синтаксис: Тип_Даних Ім'я_Масиву[Кількість_Масивів][Кількість_Елементів];
	// Приклад:
	int groups[5][10];

	// Пояснення: скільки створено змінних? 5 * 10 = 50. Скільки створено масивів? 6. Чого?
	//            Бо є масив масивів. Це вже 1. Кожний його елемент - це масив. А це ще 5.

	// Як звертатись до кожного "студента" (елемента) в такому масиві?
	// Синтаксис звернення до елементу двовимірного масиву:
	// Ім'я_масиву[Індекс_Масиву][Індекс_Елементу]

	// Давайте перепишемо код, використовуючи цей масив:
	int number = 1;
	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[0][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[1][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[2][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[3][i];
	}

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[4][i];
	}

	// Тепер ми можемо замість першого індекса використати змінну.
	int number = 1;
	int j = 0;
	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	cout << "Group # " << number++ << "\n";
	for (int i = 0; i < PEOPLE; i++)
	{
		cout << "Student #" << i + 1 << ", enter your number: ";
		cin >> groups[j][i];
	}
	j++;

	// А тепер ми бачимо дію, яка повторюється 5 разів. А отже можемо засунути її в зовнішній цикл.
	// Перепишемо задачу з нуля, використовуючи все що ми вирахували.
	const int GROUPS = 5, STUDENTS = 10;
	int groups[GROUPS][STUDENTS];

	for (int i = 0; i < GROUPS; i++)
	{
		cout << "Group #" << i + 1 << endl;
		for (int j = 0; j < STUDENTS; j++)
		{
			cout << "Student #" << i + 1 << ", enter your number: ";
			cin >> groups[j][i];
		}
	}

	// Тепер якщо ви захочете збільшити/зменшити кількість груп чи поміняти кількість студентів,
	// то вам прийдеться поміняти лише одне число.

	// Зауваження №1: коли вам треба використовувати не одну сукупність даних а декілька - використовуйте
	//                двовимірний масив.

	// Зауваження №2: для обробки 2 масивів треба два цикла: зовнішній і вкладений.

	// Зауваження №3: для кращого порозуміння індексів в двовимірному масиві можна представити,
	//                що перший розмір - це кількість рядків, а другий - це кількість стовпчиків в кожному рядку.
	const int ROWS = 3, COLUMNS = 5;
	int arr[ROWS][COLUMNS];

	for (int i = 0; i < ROWS; i++) // представимо що проходимось по кожному рядку
	{
		for (int j = 0; j < COLUMNS; j++) // ми в якомусь рядку. Представимо що проходимось по кожному його стовпчику
		{
			arr[i][j] = i * j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Зауваження №4: двовимірний масив - це лише один із видів багатовимірних масивів. Ще є 3-вимірний, 4-вимірний
	//                і так далі, поки вам не надоїсть. Я НІКОЛИ не використовував в своїй практиці більше ніж 2-вимірний
	//                масив, але знати що інші виміри є, і як їх використовувати, покажу на 3-вимірному. Далі ви самі догадаєтесь.
	int arr2[2][3][4]; // 3-вимірний масив
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				arr2[i][j][k] = i * j + k;
				cout << arr2[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	// 3-вимірний масив можна представити як куб. 4-вимірний уже представити важче і так далі...

	return 0;
}