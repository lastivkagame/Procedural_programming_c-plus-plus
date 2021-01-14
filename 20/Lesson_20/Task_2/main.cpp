#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


struct Book {
	char Author[40];
	char Name[20];
	int Year;
};

Book* readbook(int size);

int serarifmetic(const int n);
void digitsparn(const int n);
bool isnumber(const int n);

Book* addbook(Book*books, int &size, Book* b);
void writetofile(Book*books, int size);

int main() {

	Book *books = new Book[2];
	strcpy_s(books[0].Author, "Lafore R.");
	strcpy_s(books[0].Name, "OOp c++");
	books[0].Year = 2009;


	strcpy_s(books[1].Author, "A.Buday");
	strcpy_s(books[1].Name, "Pattern simple");
	books[1].Year = 2015;


	int SIZE;
	Book *books2 = new Book[SIZE];
	books2 = readbook(SIZE);
	

	/*ofstream fout;//клас для потоків виводу
	fout.open("test.txt");
	fout << "Hello file" << endl;  //endl; записуємо файловий потік


	fout.close();*/

	/*ofstream fout("test.txt", ios::app);  //ios - флажок (режим) відкриття файлу, app -  дописати

	fout << "Another line";
	fout << endl << 50 << endl;
	fout << 100 << endl;
	fout << 230 << endl;
	fout.close();*/

	/*ifstream fin; //потік для зчитування з файлу

	fin.open("text.txt");*/

	/*ifstream fin("text2.txt");
	/*if(!fin)   //- v1
	{
		cout << "fille not find!\n";
	}
	
	if (!fin.is_open())   //-v2
	{
		cout << "fille not find!\n";
	}
	ifstream fin("test.txt");
	char *str = new char[100];
	if (!fin)   //- v1
	{
		cout << "fille not find!\n";
	}
	else {
		//*str[] = fin.open("text.txt");

		//fin >> str;  //- просто 1 слово
		/*fin.getline(str, 100);
		cout << str << endl;
		while (!fin.eof()) 
		{
			fin.getline(str,100);
			cout << str << endl;
		}
	}
	fin.close();
*/

	srand(time(nullptr));

	ofstream fout("numbers.txt"/*,ios::out - флажок на відкриття файлу*/);
	const int N = 3;
	int arr[N];

	int size = 0;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 20;
		fout << arr[i] << " ";
	}
	fout.close();
	//cout << serarifmetic(N) << endl; 
	//digitsparn(N);
	//cout << boolalpha << isnumber(N) << endl;
	//book add{
	books = addbook(books, size,  new Book{ "c#","thr",2019 });
	writetofile(books, size);

	Book *copy = new Book[1];

	system("pause");
	return 0;
}

int serarifmetic(const int n)
{
	int avg = 0, rezalt;

	ifstream in("numbers.txt"/*,ios::out - флажок на відкриття файлу*/); //читати а offstream -  на запис
	
	int *res = new int[n];
	int i = 0;
	while (in >> res[i])
	{
		//in >> res[i];
		avg += res[i++];
	}
	cout << "sum: " << avg << endl;

	(avg /= (i));
	delete[]res;

	return avg;
}

void digitsparn(const int n) 
{
	int neparn = 0, parn = 0, fout;

	ifstream in("numbers.txt"/*,ios::out - флажок на відкриття файлу*/); //читати а offstream -  на запис

	int *res = new int[n];
	int i = 0;
	while (in >> res[i])
	{
		if (res[i++] % 2 == 0) 
		{
			parn++;
		}
		else
		{
			neparn++;
		}
	}
	cout << "parn: " << parn << endl;
	cout << "neparn: " << neparn << endl;


	delete[]res;
}

bool isnumber(const int n) {

	int number;
	cout << "Enter number: ";
	cin >> number;

	ifstream in("numbers.txt"/*,ios::out - флажок на відкриття файлу*/); //читати а offstream -  на запис

	int *res = new int[n];
	int i = 0, digits = 0;
	bool flag = false;
	while (in >> res[i])
	{
		if (res[i++] == number)
		{
			flag = true;
			digits++;
			//return true;
		}
	}
	cout << digits;
	if (flag) 
	{
		return true;
	}

	return false;
}

Book* addbook(Book*books, int &size, Book *b)
{

	Book*temp = new Book[size + 1];
	if (books != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			temp[i] = books[i];
		}
	}
	strcpy_s(temp[size].Author, b->Author);
	strcpy_s(temp[size].Name, b->Name);
	temp[size].Year = b->Year;
	//delete[]books;
	//books = new Book[size + 1];
	size++;
	return temp;
}

void writetofile(Book*books, int size) {

	ofstream out("books.txt");
	for (int i = 0; i < size; i++) 
	{
		out << books[i].Name << endl;
		out << books[i].Author << endl;
		out << books[i].Year << endl;
	}
	out.close();
}

Book* readbook(int size) {

	ifstream in("books.txt");
	Book* tempBooks = nullptr;
	while (!in.eof()) {
		Book temp;
		in.getline(temp.Author, 100);
		in.getline(temp.Name, 100);
		in >> temp.Year;
		tempBooks = addbook(tempBooks, size, temp);
	}
	return tempBooks;
}