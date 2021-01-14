#include <iostream>
using namespace std;

int main() {
	/*9.Виведіть на екран табличку пояснення кожної escape-послідовності.
	Пояснення кожної послідовності находиться в новому рядку. Використовуйте лише RAW-рядки і endl..*/

	cout << R"(   \Escape-sequence\ )" << endl;
	cout << R"( \a   - alert or bell)" << endl;
	cout << R"( \n   - newline)" << endl;
	cout << R"( \f   - form feed)" << endl;
	cout << R"( \r   - carriage return)" << endl;
	cout << R"( \b   - backspace)" << endl;
	cout << R"( \t   - horizontal tab)" << endl;
	cout << R"( \v   - vertical tab)" << endl;
	cout << R"( \\   -  \ character)" << endl;
	cout << R"( \"   -  " character)" << endl;
	cout << R"( \?   -  ? character (obsolete))" << endl;
	cout << R"( \'   -  ' character(obsolete))" << endl;
	cout << R"( \xXX - a symbol with a 16-character code)" << endl;
	cout << R"( \ooo - octal number of one to three digits)" << endl;
	cout << R"( \xhh - hexadecimal number of one or more digits)" << endl;

	system("pause");
	return 0;
}