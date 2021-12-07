/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#include <iostream>
#include <string>

using namespace std;

#pragma once
class Man
{
private:
	string* name;
	int age;
	int weight;
public:
	void SetName(string* name) { this->name = name; }
	void SetAge(int age);
	void SetWeight(int weight);
	string* GetName() { return name; }
	int GetAge() { return age; }
	int GetWeight() { return weight; }

	Man();
	Man(string* name, int age, int weight);
	Man(Man& m);
	~Man();

	void Display();
	void Change();

	Man& operator++();
	Man& operator--();
	Man& operator++(int);
	Man& operator--(int);
};

