#include <iostream>
using namespace std;

int main() {
	/*13.	Користувач вводить з клавіатури радіус кола. Виведіть на екран: радіус, діаметр, площу, довжину. 
	Кожна величина – це змінна. Не забутьте, що в обрахунках застосовується константа PI.*/

	int circleRadius;
	const double PI = 3.1415;

	cout << "enter please number(circle radius): ";
	cin >> circleRadius;

	int circleDiameter = circleRadius * 2;
	int circleArea = PI * circleRadius * circleRadius;
	int lengthCircle = PI * circleDiameter;

	cout << "Circle Radius :" << circleRadius << " cm\n";
	cout << "Circle Diameter :" << circleDiameter << " cm\n";
	cout << "Circle Area :" << circleArea << " cm\n";
	cout << "Length Circle :" << lengthCircle << " cm\n";

	system("pause");
	return 0;
}