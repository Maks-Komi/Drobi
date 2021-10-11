#pragma once
using namespace std;

class Drob {

public:
    Drob(); // ����������� ��� ����������           
    Drob(int, int);//����������� c �����������
    //double Drob::operator double();
    Drob operator + (Drob) const;// ����� �������� ���� ������
    Drob operator - (Drob) const;// ����� ��������� ���� ������
    Drob operator * (Drob) const;// ����� ��������� ���� ������    
    Drob operator / (Drob) const;// ����� ������� ���� ������
    bool operator < (Drob) const;
    bool operator > (Drob) const;
    bool operator == (Drob) const;
    bool operator != (Drob a) const;
    Drob operator ++ (int) const;
    Drob operator -- (int) const;
    friend ostream& operator << (ostream&, const Drob&);//������� ������ �����
    friend istream& operator >> (istream&, Drob&);//������� ����� �����
private:
    int intPart;         // ����� ����� �����
    int numerator;       // ��������� �����
    int denominator;     // ����������� �����    
    void GetMixedView(); //�������������� � ��������� ���
    void Cancellation(); //���������� �����
    void GetIntPart();   //��������� ����� ����� �����
};



