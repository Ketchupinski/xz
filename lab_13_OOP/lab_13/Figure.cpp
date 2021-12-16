#include "Figure.h"

Figure::Figure() {
	this->a = a;
}

Figure::Figure(int a) {
	if (a > 0) {
		this->a = a;
	}
	else {
		cout << "a must be more than 0!" << endl;
	}
}

Figure::Figure(Figure& f) {
	this->a = f.a;
}

Figure::~Figure() { }

