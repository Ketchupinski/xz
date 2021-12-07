#include "School.h"

School::School() : Man() {
	this->class_num = 0;
}

School::School(Man m, int class_num) : Man(m) {
	this->class_num = class_num;
}

School::School(string* name, int age, int weight, int class_num)
	: Man(name, age, weight)
{
	this->class_num = class_num;
}

School::School(School& s) : Man(s) {
	this->class_num = s.class_num;
}

School::~School() {
	Man::~Man();
}

void School::Display() {
	Man::Display();
	cout << "Class: " << this->class_num << endl;
}

School& School::operator++(int) {
	this->class_num++;
	return *this;
}

School& School::operator--(int) {
	this->class_num--;
	return *this;
}