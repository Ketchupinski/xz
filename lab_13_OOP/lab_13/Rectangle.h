#include "Figure.h"
#pragma once
class Rectangle : public Figure
{
private:
	int b;
public:
	int get_b() { return b; }
	void set_b(int);
	Rectangle();
	Rectangle(int, int);
	Rectangle(Rectangle&);
	~Rectangle();
	virtual int squ();
	virtual int per();
};

