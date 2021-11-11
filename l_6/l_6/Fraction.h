/*
�������� ���� Fraction ��� ������ � ��������� �������. ����� �� ����
������������ ����� ������:
� ���� ������� � ����� ���� �� ������,
� ������� ������� � ���-������� ������� ����.
���������� ������ � ���������� ��������:
� ��������,
� �������� ���������.
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

