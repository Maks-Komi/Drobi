#pragma once
using namespace std;

class Drob {

public:
    Drob(); // конструктор без параметров           
    Drob(int, int);//конструктор c параметрами                     
    Drob operator + (Drob) const;// метод сложения двух дробей
    Drob operator - (Drob) const;// метод вычитания двух дробей
    Drob operator * (Drob) const;// метод умножения двух дробей    
    Drob operator / (Drob) const;// метод деления двух дробей
    Drob operator < (Drob) const;
    Drob operator > (Drob) const;
    Drob operator == (Drob) const;
    Drob operator ++ (int) const;
    Drob operator -- (int) const;
    friend ostream& operator << (ostream&, const Drob&);//функция вывода дроби
    friend istream& operator >> (istream&, Drob&);//функция ввода дроби
private:
    int intPart;         // целая часть дроби
    int numerator;       // числитель дроби
    int denominator;     // знаменатель дроби    
    void GetMixedView(); //преобразование в смешанный вид
    void Cancellation(); //сокращение дроби
    void GetIntPart();   //выделение целой части дроби
};



