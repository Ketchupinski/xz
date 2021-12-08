#pragma once
#include "Man.h"

// Створити похідний Student, що має поле «курс».Визначити методи пере -
// присвоєння та збільшення курсу.

class Student : public Man
{
private:
	int course;
public:
	Student();
	Student(Man m, int course);
	Student(string name, int age, string sex, int weight, int course);
	Student(Student& s);
	~Student();

	int GetCourse() { return course; }
	void SetCourse(int course);

	void Change();
	void Display();
};

