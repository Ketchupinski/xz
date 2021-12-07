#include "School.h"

School::School() : Man() {
	this->class_num = 0;
}

School::School(Man m, int class_num) : Man(m) {
	if (class_num > 0) {
		this->class_num = class_num;
	}
	else {
		cout << "Wrong arguments given!" << endl;
		exit(0);
	}
}

School::School(string* name, int age, int weight, int class_num)
	: Man(name, age, weight)
{
	if (class_num > 0) {
		this->class_num = class_num;
	}
	else {
		cout << "Wrong arguments given!" << endl;
		exit(0);
	}
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

void School::Change() {
	Man::Change();
	int cn = 0;
	cout << "Input class number: "; cin >> cn;
	if (cn > 0) {
		this->class_num = cn;
	}
	else {
		cout << "Wrong arguments given!" << endl;
	}
}