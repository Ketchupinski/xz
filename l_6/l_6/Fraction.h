/*
—творити клас Fraction дл€ роботи з дробовими числами. „исло маЇ бути
представлене двома пол€ми:
Х ц≥ла частина Ц довге ц≥ле ≥з знаком,
Х дробова частина Ц без-знакове коротке ц≥ле.
–еал≥зувати методи Ц арифметичн≥ операц≥њ:
Х в≥дн≥манн€,
Х операц≥њ пор≥вн€нн€.
*/
#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Fraction
{
private: 
	long x; // numerator
	unsigned short y; // donominator

public:
	Fraction();
	Fraction(long x, unsigned short y);
	Fraction(Fraction& f);
	~Fraction();
	void SetX(long x) { this->x = x; }
	void SetY(unsigned short y) { this->y = y; }
	void Read();
	void Display();

	operator string();

	// prefix
	Fraction operator++();
	Fraction operator--();
	// postfix
	Fraction operator--(int);
	Fraction operator++(int);

	friend Fraction operator -(Fraction f1, Fraction f2);

	bool operator ==(Fraction f);
	bool operator !=(Fraction f);
	bool operator >(Fraction f);
	bool operator <(Fraction f);
};

