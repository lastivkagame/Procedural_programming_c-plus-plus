#include <iostream>
using namespace std;
int main()
{
	// Бувають випадки, коли треба працювати зі шляхами файлової системи.
	// В шляхах постійно зустрічаються "\" - а це частина escape-послідовності,
	// також зустрічаються апострофи, які також не легко вивести.
	// Якщо є шлях C:\MyFiles\I'm Stupid\Not really, то:

	cout << "C:\MyFiles\I'm Stupid\Not really";     // цей рядок не виведе коректно шлях
	cout << "C:\\MyFiles\\I\'m Stupid\\Not really"; // а цей виведе, але він виглядає жахливо

	// Тому були придумані RAW-рядки, в якиx escape-послідовності не працюють.
	// Синтаксис RAW-рядка: R"(Ваш текст)"
	cout << R"(C:\MyFiles\I'm Stupid\Not really)"; // все виведе чітко і правильно

	return 0;
}