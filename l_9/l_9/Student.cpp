#include "Student.h"

Student::Student() : Man::Man() {
	this->course = 0;
}

Student::Student(Man m, int course) : Man::Man(m) {
	this->course = course;
}

Student::Student(string name, int age, string sex, int weight, int course)
	: Man(name, age, sex, weight) {
	this->course = course;
}

Student::Student(Student& s) : Man(s) {
	this->course = s.course;
}

Student::~Student() {}

void Student::SetCourse(int course) {
	if (course > 0 && course < 10) {
		this->course = course;
	}
	else {
		cout << "Wrong argument!" << endl;
		exit(0);
	}
}

void Student::Display() {
	Man::Display();
	cout << "Course: " << this->course << endl;
}

void Student::Change() {
	Man::Change();
	int c;
	cout << "Input new course: "; cin >> c;
	if (c > 0 && c < 10) {
		this->course = c;
	}
	else {
		cout << "Wrong argument!" << endl;
		exit(0);
	}
}