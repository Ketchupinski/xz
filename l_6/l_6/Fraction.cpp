#include "Fraction.h"

Fraction::Fraction() {
	x = 0;
	y = 0;
}

Fraction::Fraction(long x, unsigned short y) {
	this->x = x;
	this->y = y;
}

Fraction::Fraction(Fraction& f) {
	this->x = f.x;
	this->y = f.y;
}

Fraction::~Fraction() {
	x = 0;
	y = 0;
}

void Fraction::Read() {
	cout << endl;
	cout << "Input x: "; cin >> this->x;
	cout << "Input y: "; cin >> this->y;
	cout << endl;
}

void Fraction::Display() {
	cout << endl;
	cout << "x: " << this->x << endl;
	cout << "y: " << this->y << endl;
	cout << endl;
}

Fraction Fraction::operator++() {
	Fraction tmp = *this;
	y++;
	return tmp;
}

Fraction Fraction::operator--() {
	Fraction tmp = *this;
	y--;
	return tmp;
}

Fraction Fraction::operator++(int) {
	Fraction tmp = *this;
	x++;
	return tmp;
}

Fraction Fraction::operator--(int) {
	Fraction tmp = *this;
	x--;
	return tmp;
}


Fraction::operator string()
{
	stringstream sout;
	sout << "x: " << x << "\ny: " << y;
	return sout.str();
}

Fraction operator -(Fraction f1, Fraction f2) {
	long num = (f1.x * f2.y) - (f1.y * f2.x);
	unsigned int denom = f1.y * f2.y;
	Fraction tmp(num, denom);
	return tmp;
}

bool Fraction::operator==(Fraction f) {
	double num1 = this->x / this->y;
	double num2 = f.x / f.y;
	if (num1 == num2) {
	}
	else {
		return false;
	}
}

bool Fraction::operator!=(Fraction f) {
	double num1 = this->x / this->y;
	double num2 = f.x / f.y;
	if (num1 != num2) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator>(Fraction f) {
	double num1 = this->x / this->y;
	double num2 = f.x / f.y;
	if (num1 > num2) {
		return true;
	}
	else {
		return false;
	}
}

bool Fraction::operator<(Fraction f) {
	double num1 = this->x / this->y;
	double num2 = f.x / f.y;
	if (num1 < num2) {
		return true;
	}
	else {
		return false;
	}
}