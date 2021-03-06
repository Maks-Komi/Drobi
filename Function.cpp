#include<iostream>
#include<string>
#include "Function.h"
using namespace std;

Drob::Drob(int n, int d) {
	numerator = n;
	denominator = d;
	intPart = n / d;
	GetMixedView();
}

Drob::Drob() {
	intPart = 0;
	numerator = 0;
	denominator = 1;
}

void Drob::GetMixedView() {
	GetIntPart();
	Cancellation();
}

void Drob::GetIntPart() {
	if (numerator >= denominator) {
		intPart += (numerator / denominator);
		numerator %= denominator;
	}
}

void Drob::Cancellation() {
	if (numerator != 0) {
		int m = denominator,
			n = numerator,
			ost = m % n;
		// ?????????? ???(?????????, ???????????)
		// ?????????? ???????
		while (ost != 0){
			m = n; 
			n = ost;
			ost = m % n;
		}
		int nod = n;
		if (nod != 1){
			numerator /= nod; 
			denominator /= nod;
		}
	}	
}

//Drob::operator double()
//{
//	double res = (intPart * denominator + numerator) /	denominator;
//	return res;
//}

Drob Drob::operator + (Drob a) const {
	Drob res;
	res.numerator = (intPart * denominator + numerator) * a.denominator +
		(a.intPart * a.denominator + a.numerator) * denominator;
	res.denominator = denominator * a.denominator;
	res.GetMixedView();
	return res;
}

Drob Drob::operator - (Drob a) const {
	Drob res;
	res.numerator = (intPart * denominator + numerator) * a.denominator -
		(a.intPart * a.denominator + a.denominator) * denominator;
	res.denominator = denominator * a.denominator;
	if (res.numerator < 0) {
		
	}
	res.GetMixedView();
	return res;
}

Drob Drob::operator * (Drob a) const {
	Drob res;
	res.numerator = numerator * a.numerator;
	res.denominator = denominator * a.denominator;
	res.GetMixedView();
	return res;
}

Drob Drob::operator/ (Drob a) const {
	Drob res;
	res.numerator = numerator * a.denominator;
	res.denominator = denominator * a.numerator;
	res.GetMixedView();
	return res;
}

bool Drob::operator < (Drob a) const {
	Drob temp;
	temp.numerator = (intPart * this->denominator + this->numerator) * a.denominator -
			(a.intPart * a.denominator + a.denominator) * this->denominator;
	temp.denominator = this->denominator * a.denominator;
	temp.GetMixedView();
		if (temp.numerator < 0) {
			return true;
		}	
	return false;
}

bool Drob::operator > (Drob a) const {
	Drob temp;
	temp.numerator = (intPart * this->denominator + this->numerator) * a.denominator -
		(a.intPart * a.denominator + a.denominator) * this->denominator;
	temp.denominator = this->denominator * a.denominator;
	temp.GetMixedView();
	if (temp.numerator > 0) {
		return true;
	}
	return false;
}

bool Drob::operator == (Drob a) const {
	if (intPart != a.intPart || numerator * a.denominator != denominator * a.numerator)
		return false;
	return true;
}

bool Drob::operator != (Drob a) const {
	if (intPart == a.intPart &&	numerator * a.denominator == denominator * a.numerator)
		return false;
	return true;
}

Drob Drob::operator ++ (int a) const {
	a = 1;
	Drob b(a, a);
	Drob res;
	res = (*this + b);
	res.GetIntPart();
	res.GetMixedView();
	return res;
}

Drob Drob::operator -- (int a) const {
	a = 1;
	Drob b(a, a);
	Drob res;
	res = (*this - b);
	res.GetIntPart();
	res.GetMixedView();
	return res;
}

ostream& operator << (ostream& out, const Drob& a) {
	if (a.intPart != 0) {
		out << a.intPart << " ";
	}
	if (a.numerator != 0) {
		out << a.numerator << "/" << a.denominator;
	}
	if (a.intPart == 0 && a.numerator == 0)
		out << "0";
	return out;
}

istream& operator >> (istream& fin, Drob& a) {
	int chisl, znam;
	fin >> chisl;
	char c;
	fin.get(c);
	if (c != '/') {
		znam = 1;
	}
	else {
		fin >> znam;
	}	
	a.numerator = chisl;
	a.denominator = znam;
	a.GetMixedView();
	a.GetIntPart();
	a.Cancellation();
	return fin;
}