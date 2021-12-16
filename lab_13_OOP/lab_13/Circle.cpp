#include "Circle.h"

Circle::Circle() 
	: Figure() { }

Circle::Circle(int r) 
	: Figure(r) { }

Circle::Circle(Circle& c) 
	: Figure(c) { }

Circle::~Circle() { }

int Circle::per() {
	double pi = 3.14;
	return (pi * 2 * get_a() );
}

int Circle::squ() {
	double pi = 3.14;
	return (pi * pow(get_a(), 2));
}

