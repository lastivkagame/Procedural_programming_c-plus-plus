#include <iostream>

using namespace std;

void strcopy(char* dest, const char* source);

void main()
{
	char str[] = "Hello world! Hello Sunday!!!"; // {'h','e','l','l','o',' ','w','o','r','l','d','!','\0'}

#pragma region char str[]
//	cout << str << endl; // 
//	cout << *str << endl;
////	str++;  // str - const char*
//	char* pStr = str;
//	pStr++;
//	cout << *pStr << endl;  // 
//	cout << "Print *pStr\n";
//	for (int i = 0; i < strlen(str); i++) // strlen - функція яка повертає довжину рядка
//		cout << *pStr++;
//	cout << endl;
//	cout << endl;
//	cout << "Print const str\n";
//	for (int i = 0; i < strlen(str); i++) // strlen - функція яка повертає довжину рядка
//		cout << *(str+i);
//
//
//	cout << endl;
#pragma endregion;
#pragma region Dynamic memory, operator new
	//char *str2 = new char[strlen(str)+1]; // виділяємо динамічну пам'ять
	//strcopy(str2, str);

	//cout << "Str2 = " << str2 << endl;
	//char* pSTR = new char;
	//delete pSTR; // очищаємо пам'ять яку виділили під вказівник pSTR
	//delete[]str2;// очищаємо пам'ять яку виділили під масив str2
#pragma endregion
	int size;
	cout << "Enter size of array: ";
	cin >> size;

	// create arr of size
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		int elem;
		cin >> elem;
		arr[i] = elem;
	}

	cout << "Arr after fill" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	delete[]arr;

}

void strcopy(char* dest, const char* source)
{
	char* temp = new char[10];
	while(*source!='\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
	delete[] temp;
}