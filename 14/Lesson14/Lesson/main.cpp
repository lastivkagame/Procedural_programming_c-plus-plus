#include <iostream>
using namespace std;

int main() {

	char str1[] = " world";
	char str2[] = " word";
	char str3[] = "Hello";

#pragma region char array
	/*
		char symbols[] = { 'H','e','l','l','o' };
		cout << symbols << endl;

		char symbols2[] = {"Hello"};
		cout << symbols2 << endl;

		cout << "for \n";
		for (int i = 0; i < strlen(symbols); i++)
		{
			cout << symbols[i];
		}
		cout << endl;
		*/
#pragma endregion

#pragma region static array
		/*
		char name[100];

		cout << "enter name,surname: ";
		//cin >> name;   //cin зчитує дані до пробіла або enter

		cin.getline(name, 100);  //зчитує до enter разом з пробілами
		cout << name << endl;
		*/
#pragma endregion

#pragma region strcopy_my_created
		/*
		char *name = new char[100];
		cout << "Enter name: ";
		cin >> name;

		cout << "Lenth: " << strlen(name) << endl;

		char * newName = new char[strlen(name) + 1];
		int i = 0;

		for (int i = 0; i < strlen(name); i++)
		{
			newName[i] = name[i];
		}
		newName[strlen(name)] = '\0';


		delete[]name;
		cout << newName << endl;*/
#pragma endregion

#pragma region how use function strcpu_s

	char *name = new char[100];
	cout << "Enter name: ";
	cin >> name;

	cout << "Lenth: " << strlen(name) << endl;

	char * newName = new char[strlen(name) + 1];

	strcpy_s(newName, strlen(name) + 1, name);

	delete[]name;
	cout << newName << endl;
#pragma endregion


#pragma region strcmp
	/*
	if (strcmp(str1, str1))
	{
		cout << "Strings are equal\n";
	}

	cout << strcmp(str1, str2) << endl;
	cout << strcmp(str2, str3) << endl;*/
#pragma endregion

#pragma region strcat
	/*char buf[100] = " ";

	strcat_s(buf, 100, str3);
	strcat_s(buf, 100, str1); // обэднує рядки

	cout << buf << endl;*/
#pragma endregion

#pragma region strstr
	//cout << strstr(str1, "world");  // дивиться чи є слово якщо нема вилітає
#pragma endregion

#pragma region _strupr_s
	//_strupr_s(str1, strlen(str1) + 1);
#pragma endregion

	system("pause");
	return 0;
}