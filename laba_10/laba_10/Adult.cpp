/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#include "Adult.h"

Adult::Adult() : Man() {
	pass_num = 0;
}

Adult::Adult(string* name, int age, int weight, int pass_num) 
	: Man(name, age, weight) {
	this->pass_num = pass_num;
}

Adult::Adult(Man m, int pass_num) : Man(m) {
	this->pass_num = pass_num;
}

Adult::Adult(Adult& a) : Man(a) {
	this->pass_num = a.pass_num;
}

Adult::~Adult()	{
	Man::~Man();
}

void Adult::Display() {
	Man::Display();
	cout << "Password number:" << pass_num << endl;
}

Adult& Adult::operator++(int) {
	this->pass_num++;
	return *this;
}

Adult& Adult::operator--(int) {
	this->pass_num--;
	return *this;
}