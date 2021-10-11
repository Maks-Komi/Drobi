#include<iostream>
#include<string>
#include"Function.h"
using namespace std;

/*Создайте класс Дробь(или используйте
	уже ранее созданный вами).Используя перегрузку
	операторов, реализуйте для него логические
	операции для работы с дробями, инкремент и декремент
	(операции > , < , ++, --, == ).

	Было:
vrai = drob1.less(drob2);

Будет:
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
		cout << "Дробь а меньше дроби b" << endl;
	}
	else if (a > b) {
		cout << "Дробь а больше дроби b" << endl;
	}
	else {
		cout << "Дроби равны!" << endl;
	}
	vrai3 = a == b;
	if (vrai3 == true) {
		cout << "Дроби равны!" << endl;
	}
	else {
		cout << "Дроби не равны!" << endl;
	}
	vrai4 = a != b;
	if (vrai4 == true) {
		cout << "Дроби не равны!" << endl;
	}
	cout << a++ << endl;
	cout << b-- << endl;
}