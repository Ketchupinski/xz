#include "Trapezium.h"

Trapezium::Trapezium() : Figure() {
	this->z = 0;
	this->x = 0;
	this->c = 0;
}

Trapezium::Trapezium(int a, int z, int x, int c) : Figure(a) {
	if (z > 0 && x > 0 && c > 0) {
		this->z = z;
		this->x = x;
		this->c = c;
	}
	else {
		cout << "Arguments must be more than 0!" << endl;
	}
}

Trapezium::Trapezium(Trapezium& t) : Figure(t) {
	this->z = t.z;
	this->x = t.x;
	this->c = t.c;
}

Trapezium::~Trapezium() 
{ }

int Trapezium::squ() {
	return (x + get_a()) / 2.0 * (sqrt(z * z - (get_a() - x) / 2.0 * (get_a() - x) / 2.0));
}

int Trapezium::per() {
	return z + x + c + get_a();
}