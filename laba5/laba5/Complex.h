/*
Створити клас комплексне число. Перевантажити операції порівняння
комплексних чисел !=, ==, >, =, <= та операції потокового введення-виведення.
*/

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Complex
{
	double real; // real part of complex number
	double image; // image part of complex number
public:
	// constructors
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	//destructor
	~Complex();


	void SetReal(double real) { this->real = real; };
	void SetImage(double image) { this->image = image; };
	double GetReal() const { return real; };
	double GetImage() const { return image; };

	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
	operator string() const;

	friend bool operator==(const Complex& x, const Complex& y);
	friend bool operator !=(const Complex& a, const Complex& b);
	friend bool operator >(const Complex& a, const Complex& b);
	friend bool operator <=(const Complex& a, const Complex& b);
	Complex& operator = (const Complex& num);
};
