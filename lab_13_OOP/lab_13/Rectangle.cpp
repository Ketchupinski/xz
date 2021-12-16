#include "Rectangle.h"

void Rectangle::set_b(int b) {
	if (b > 0) {
		this->b = b;
	}
	else {
		cout << "b must be more than 0!" << endl;
	}
}

Rectangle::Rectangle() : Figure() {
	b = 0;
}

Rectangle::Rectangle(int a, int b) : Figure(a) {
	if (b > 0) {
		this->b = b;
	}
	else {
		cout << "b must be more than 0!" << endl;
 	}
}

Rectangle::Rectangle(Rectangle& r) : Figure(r) {
	this->b = r.b;
}

Rectangle::~Rectangle() { }

int Rectangle::per() {
	return (2 * get_a() + 2 * b);
}

int Rectangle::squ() {
	return get_a() * b;
}