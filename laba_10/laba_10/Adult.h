/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#pragma once
#include "Man.h"

class Adult : public Man
{
private:
	int pass_num;
public:
	Adult();
	Adult(Man m, int pass_num);
	Adult(string* name, int age, int weight, int pass_num);
	Adult(Adult& a);
	~Adult();

	void SetPassNum(int pass_num) { this->pass_num = pass_num; }
	int GetPassNum() { return pass_num; }

	void Display();

	Adult& operator++(int);
	Adult& operator--(int);
};

