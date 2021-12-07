/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#include "Man.h"
Man::Man() {
	this->name = nullptr;
	this->age = 0;
	this->weight = 0;
}

Man::Man(string* name, int age, int weight) {
	this->name = name;
	this->age = age;
	this->weight = weight;
}

Man::Man(Man& m) {
	this->name = m.name;
	this->age = m.age;
	this->weight = m.weight;
}

Man::~Man() {
	this->name = nullptr;
}

void Man::Display() {
	cout << "Name: " << *this->name << endl;
	cout << "Age: " << this->age << endl;
	cout << "Weight: " << this->weight << endl;
}

Man& Man::operator++() {
	this->age++;
	return *this;
}

Man& Man::operator--() {
	this->age--;
	return *this;
}

Man& Man::operator++(int) {
	this->weight++;
	return *this;
}

Man& Man::operator--(int) {
	this->weight++;
	return *this;
}