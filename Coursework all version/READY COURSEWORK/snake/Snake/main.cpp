#include "header.h"

extern bool gameOver;   
extern int gameMode;   
extern const int width; // ������ �������� ����
extern const int height;   //������ �������� ����
extern int x, y, fruitX, fruitY, score;  //���������� x i y (i ��� ������ ���), �������
extern int tailX[100], tailY[100], g[7], p[7];        //��� ������ �쳿 + ��� ��������(������ g,p)
extern int kTail;  //�� ��� ������ ������� ������ �쳿 ��������� ���� ���� �'��� 5 ������ �� � �� ���� ���� � 5 �������
extern int speed; //�� �������� ��� �� ������������ ����� �������

//���������
extern char snakeHead;
extern char snakeBody;
extern char fruit;
extern char borders;
extern char obstackles;

extern Move mov;

string nameuser = "Anonymos";   //��� ���� ��� �������� ������
string userready;      //��� ���� ��� ���� ������� ������ � �������� ���� ���������

int main() {

	srand(time(nullptr));
	ShowMainDisplay();

	bool replay = true;
	do {

		cout << endl;
		cout << " ****  *     *     *     *  *  *****\n";
		cout << " *     * *   *    * *    * *   *    \n";
		cout << " ****  *  *  *   *   *   **    *****\n";
		cout << "    *  *   * *  *  *  *  * *   *    \n";
		cout << " ****  *     *  *     *  *  *  *****\n";
		cout << endl;

		int choose;
		cout << "\tMain Menu\n";
		cout << "1 - Start Game\n";
		cout << "2 - Rules of game\n";
		cout << "3 - Setting(design and speed and gamr mod)\n";
		cout << "4 - log in or sign up\n";
		cout << "5 - Board of resalts\n";
		cout << "6 - Exit\n";
		cout << "Answer: ";
		cin >> choose;

		//��� ������ � ���������� ���������� � �����
		ifstream fout;
		ofstream file;
		int choose4 = 3;

		switch (choose)
		{
		case 1:

			startSettings();
			while (gameOver == false)
			{
				draw();
				input();
				logic();
			}

			//����� ���� ��� ����� ������ � ���� ���������� � ��������� ����
			file.open("Board_champ.txt", ios::app);  //��������� ���� ��� ������
			file << "-" << nameuser;
			file << "---" << score << endl;
			file.close();  //��������� ����

			system("cls");   //������� �����

			SetColor(12, 0);
			cout << "  YOU LOSE!\n";
			SetColor(10, 0);
			cout << "  DO NOT SAD! \n";
			cout << "  TRY AGAIN!\n";
			cout << "  I believe in you!\n";
			SetColor(15, 0);

			system("pause");
			break;
		case 2:

			system("cls");  //������� �����

			SetColor(10, 0);
			cout << " ~ HOW MANAGE SNAKE?\n";
			SetColor(11, 0);
			cout << " - a  (click this key if you want that snake to move RIGHT)\n";
			cout << " - w  (click this key if you want that snake to move UP)\n";
			cout << " - d  (click this key if you want that snake to move LEFT)\n";
			cout << " - s  (click this key if you want that snake to move DOWN)\n";
			cout << " - z  (click this key if you want exit of game)\n\n";
			SetColor(10, 0);
			cout << "\tIF SIMLE TO\n";
			cout << "    w          ->               UP\n";
			cout << "a   s   d      ->      RIGHT   DOWN   LEFT\n\n";
			SetColor(11, 0);
			cout << "z - EXIT of game\n\n";
			cout << "~ You LOSE if snake will touch to their tail\n\n";
			SetColor(11, 0);
			cout << "~ If you want designed game to your taste than you can go to Settings(Designed)\n\n";
			SetColor(15, 0);
			system("pause");
			break;
		case 3:

			system("cls"); //������� �����

			int chooseSeting;
			cout << "\tSettings\n";
			cout << " 1 - Speed of snake\n";
			cout << " 2 - Design\n";
			cout << " 3 - Exit\n";
			cout << "Answer: ";
			cin >> chooseSeting;

			switch (chooseSeting)
			{
			case 1:
				cout << "\tSpeed\n";
				cout << "1 - slowly\n";
				cout << "2 - normal\n";
				cout << "3 - quickly\n";
				cout << "4 - exit\n";
				cout << "Answer: ";
				cin >> speed;

				//�������� ����� ���� ���������� �� ������������� �� ��������
				if (speed < 0 || speed>4)
				{
					cout << "Inccorect direction!\n";
					speed = 2;
				}
				break;
			case 2:
				//����� ����� ����� �쳿, �� ������, ���,�����
				cout << "\tDesign\n";
				cout << "1 - borders\n";
				cout << "2 - snake head\n";
				cout << "3 - snake body\n";
				cout << "4 - fruit\n";
				cout << "5 - exit\n";
				cout << "Answer: ";
				cin >> choose;

				switch (choose)
				{
				case 1:
					cout << "Enter how sysmbol you want to be as borders: ";
					cin >> borders;
					break;
				case 2:
					cout << "Enter how sysmbol you want to be as snake head: ";
					cin >> snakeHead;
					break;
				case 3:
					cout << "Enter how sysmbol you want to be as snake body: ";
					cin >> snakeBody;
					break;
				case 4:
					cout << "Enter how sysmbol you want to be as fruit: ";
					cin >> fruit;
					break;
				case 5:
					break;
				default:
					cout << "Inccorect direction!\n";
					break;
				}
				break;
			case 3:
				break;
			default:
				cout << " Inccorect direction!\n";
				break;
			}
			break;
		case 4:
			//������ ���� ����� ���� � ������� �� ���� ��� ����� ��� ����� ����������� ��� ����
			cout << " Menu\n";
			cout << "1 - Log in\n";
			cout << "2 - Sign in\n";
			cout << "3 - Exit\n";
			cout << "Answer: ";
			cin >> choose4;

			switch (choose4)
			{
			case 1:
				cout << "Enter name: ";
				cin >> nameuser;

				cout << "Perfect! Now you log in! Your rezalt will be saved!\n";
				break;
			case 2:
				cout << "Enter name: ";
				cin >> nameuser;

				cout << "Perfect! Now you sign in! Your rezalt will be saved!\n";
				break;
			case 3:
				break;
			default:
				cout << "Inccorect direction!\n";
				break;
			}

			system("pause");

			break;
		case 5:

			system("cls");  //������� �����

			fout.open("Board_champ.txt", ios::app);  //��������� ���� ��� ������

			while (!fout.eof()) {
				fout >> userready;            //�������
				cout << userready << endl;   //��������
			}
			cout << endl;
			
			fout.close();  //���������� ���������

			system("pause");
			break;
		case 6:
			replay = false;
			break;
		default:
			cout << "Inccorect direction!\n";
			break;
		}

		system("cls");  //������� �����

	} while (replay);

	return 0;
}