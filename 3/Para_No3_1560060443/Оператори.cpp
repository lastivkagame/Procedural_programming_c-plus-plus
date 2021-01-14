#include <iostream>
using namespace std;

int main()
{
	// �������� - �� �����������, ������� ��� ����� ���������� ���� �������� ��� ������.
	// ������� - ����, ��� ����� ��������� ��������.

	// ���� ���������:
	// ������ - ����� ���� 1 �������
	// ������� - ����� ���� 2 ��������
	// ��������� - ����� 3 �������� (� �++ �� ���� �����).

	// ��� ������ ����������� � ����������� �� ������.

	// --- ����������� ��������� ---:
	// 1. ������������ "="
	int a = 30; // "=" - �� �������� ���������. ³� �������� �������� ������ �� ����� ������, ��� ���������� ���� �� �����.

	// 2. ������� ���� "+"
	int b = 10;
	int c = +10; // � ������ ������� "+" � �������, �� ���� ���������, �� 10 � �������� ������. ������������� ����.

	// 3. ������� ���� "-"
	int d = 3;
	int e = -d; // � ������ ������� "-" � �������, �� ������� ��������, ���������� �������� ����� ������ �� ����� (�� ������ ��)
	cout << d << " " << e << endl; // �� ������ 3 -3

	// 4-7. ���������, ���������, ��������, ������ "+", "-", "*", "/"
	int f = 2 + 4;  // f = 6
	int g = f - 5;  // g = 1
	int h = g * f;  // f = 6
	int j = h / 2;  // j = 3

	// 8. ĳ����� �� ������ "%"
	int k = 10;
	int l = k % 2; // �� ���������� � �����? 0. ����? ���� �� ������ �� ������ �������� ������ �� ������ � �� �������. ������ �����
				   // 2 �������� �������� � ���� 10? 5 ����, � ������� ��������. ���� 0.

	cout << 8 % 3 << endl;  // 3 �������� ���� 2 ��� ��������, �� ���� 6. ����� 6 �� ����� �����, ��� ����� 8. ���� �� ������ 2.
	cout << 16 % 9 << endl; // 9 �������� ���� 1 ��� ��������, �� ���� 9. ����� 9 �� ����� ����, ��� ����� 16. ���� �� ������ 7.

	// ����������: ��� �������� � ��� �++ ������ ���� � ������ �������

	// 9. ��������� "++" � ��������� "--"
	// � ������������� ���� ������ ����� �� ����� ���� ��������������. � ��� ����� �������� ����������� ��������-�����, ��� � ������ �����
	// ���������� �� �������. ���� ���� ���������� ���� ����� �� ������, ��������� ��������� ��������� ���������� � ����������.
	// ����������� ����������: �������� �������� ����� �� 1.
	int n = 5;
	cout << n << endl; // 5
	n++;
	cout << n << endl; // 6
	++n;
	cout << n << endl; // 7

	// ����������� ����������: ���������� �������� ����� �� 1.
	int m = 6;
	cout << m << endl; // 6
	m++;
	cout << m << endl; // 5
	++m;
	cout << m << endl; // 4

	// ����������: ���� ���������/��������� ����� ϲ��� �����, �� ����� ���������� ����Բ����� / ��Բ�����
	//             ���� ���������/��������� ����� ����� ������, �� ����� ���������� ���Բ�����
	// г����� �� ���� � ������� ��������� �������. ��� ���� �, ���� �� ������������� � �������:
	int o = 10;
	int p = o++;
	cout << o << endl; // 11
	cout << p << endl; // 10

	int r = 10;
	int s = --r;
	cout << r << endl; // 9
	cout << s << endl; // 9

	// � �������� ����� �������, �� ��������� ����� �������� ��������: �������� �̲���� �������� �����, � ���� ���� ���������
	//                    ���������� / �������� ����� �������� ��������: �������� ��������� �������� �����, � ���� ���� �̲����

	// --- ��������� ��������� ---:
	// ���� ����� ��� ���������� ������ ���� �������� �����������, �������� �� ���������� ���� �����, � ��������� �� ���� ����
	// ������ ���������� ���� 䳿. ��� ����� ��� ���� �������������� ������ ���������. �Ѳ ������ ��������� ����������
	// �������� ���� bool, ����� ������ (1) ��� �������� (0). �� � ������, �� ��� ���� �� � �� ����� ���������.

	// 1-2. г������� "==" � ���������� "!="
	// ���� �� ������ �������� �������� ���� ������, ������������ �������� "==".
	int one = 1, two = 2;
	cout << "1 = 2? Answer: " << (one == two) << endl; // �� ������ 0 (������), �� 1 �� ����� 2.

	// ���������� �1: ������� �����? ���� �� ������, ���� ������� �� ���� ���������
	// ���������� �2: �� �������� � ������������� �������� "=" � �������� "==". ������ ������ �� �������, �� ������ �������� ����� ������ ������ ����.
	//                ������ �� ������� ��� �������� �� ����� ������� �� ����� � ���� ���� ���� - ������� 1. ������ 0.

	// ��� ��������� ��� �������� �� �� �������, �������������� �������� "!=".
	cout << "1 != 2? Answer: " << (one != two) << endl; // �� ������ 1 (������), �� 1 ����� �� ����� 2

	// 2-3. ������ ">" i ����� "<".
	cout << "1 < 2? Answer: " << (one < two) << endl; // �� ������ 1 (������), �� 1 ������ �� 2
	cout << "1 > 2? Answer: " << (one > two) << endl; // �� ������ 0 (������), �� 1 �� ������ �� 2

	// 4-5. ������ �� ���� ">=" � ����� �� ���� "<=".
	int a1 = 1, a2 = 2, a3 = 2;
	cout << "a1 <= a2? Answer: " << (a1 <= a2) << endl; // �� ������ 1 (������), �� 1 ��� � �� ����� 2, ��� ������
	cout << "a2 <= a3? Answer: " << (a2 <= a3) << endl; // �� ������ 1 (������), �� 2 ��� � �� ����� 2, ��� ����

	system("pause");
	return 0;
}