/*
Створити клас комплексне число. Перевантажити операції порівняння
комплексних чисел !=, ==, >, =, <= та операції потокового введення-виведення.
*/

#include "Complex.h"

Complex::Complex()
{
	this->real = 0;
	this->image = 0;
}

Complex::Complex(double _real, double _image)
{
	this->real = _real;
	this->image = _image;
}

Complex::Complex(const Complex& num)
{
	this->real = num.real;
	this->image = num.image;
}

//destructor
Complex::~Complex()
{
	this->real = 0;
	this->image = 0;
}

Complex::operator string () const
{
	stringstream ss;
	ss << " Real = " << real << endl;
	ss << " Image = " << image << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Complex& num)
{
	cout << endl;
	out << string(num);
	cout << endl;
	return out;
}

istream& operator >> (istream& in, Complex& r)
{
	cout << endl;
	cout << " Real = "; in >> r.real;
	cout << " Image = "; in >> r.image;
	cout << endl;
	return in;
}

Complex& Complex::operator = (const Complex& num)
{
	real = num.real;
	image = num.image;
	return *this;
}

bool operator == (const Complex& x, const Complex& y) {
	return (x.real == y.real && x.image == y.image);
}

bool operator != (const Complex& x, const Complex& y) {
	return (x.real != y.real && x.image != y.image);
}

bool operator > (const Complex& x, const Complex& y) {
	return (x.real > y.real && x.image > y.image);
}

bool operator <= (const Complex& x, const Complex& y) {
	return (x.real <= y.real && x.image <= y.image);
}
