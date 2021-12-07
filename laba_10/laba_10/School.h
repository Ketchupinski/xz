/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#pragma once
#include "Man.h"

class School : Man
{
private:
	int class_num;
public:
	School();
	School(string* name, int age, int weight, int class_num);
	School(Man m, int class_nul);
	School(School& s);
	~School();

	int GetClass() { return class_num; }
	void SetClass() { this->class_num = class_num; }

	void Display();
	void Change();

	School& operator++(int);
	School& operator--(int);
};

