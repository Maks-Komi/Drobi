#include<iostream>
#include<string>
#include"Function.h"
using namespace std;

/*�������� ����� �����(��� �����������
	��� ����� ��������� ����).��������� ����������
	����������, ���������� ��� ���� ����������
	�������� ��� ������ � �������, ��������� � ���������
	(�������� > , < , ++, --, == ).

	����:
vrai = drob1.less(drob2);

�����:
vrai = drob1 < drob2;*/

int main()
{
	setlocale(LC_ALL, "ru");
	Drob a(2,6), b;
	bool vrai1, vrai2, vrai3, vrai4;
	cout << "Enter two second fractions: " << endl;
	//cin >> a;
	cout << "Enter two first fractions: " << endl;
	cin >> b;
	cout << a << endl;
	cout << b << endl;
	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;
	if (a < b) {
		cout << "����� � ������ ����� b" << endl;
	}
	else if (a > b) {
		cout << "����� � ������ ����� b" << endl;
	}
	else {
		cout << "����� �����!" << endl;
	}
	vrai3 = a == b;
	if (vrai3 == true) {
		cout << "����� �����!" << endl;
	}
	else {
		cout << "����� �� �����!" << endl;
	}
	vrai4 = a != b;
	if (vrai4 == true) {
		cout << "����� �� �����!" << endl;
	}
	cout << a++ << endl;
	cout << b-- << endl;
}