/*Створити клас Man(людина) з полями : ім’я, вік, стать і вага.Визначити методи
переприсвоєння імені, зміни віку і зміни ваги.*/

#include "Man.h"

Man::Man() {
	this->age = 0;
	this->name = "";
	this->sex = "";
	this->weight = 0;
}

Man::Man(string name, int age, string sex, int weight) {
	if (age > 0 && weight > 0) {
		this->name = name;
		this->sex = sex;
		this->age = age;
		this->weight = weight;
	}
}

Man::Man(Man& m) {
	this->name = m.name;
	this->sex = m.sex;
	this->age = m.age;
	this->weight = m.weight;
}

Man::~Man() {}

void Man::SetAge(int age) {
	if (age > 0) {
		this->age = age;
	}
	else {
		cout << "Wrong argument!" << endl;
		exit(0);
	}
}

void Man::SetWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
	else {
		cout << "Wrong argument!" << endl;
		exit(0);
	}
}

void Man::Change() {
	int a = 0, w = 0;

	cout << "Input new name: "; cin >> this->name;
	cout << "Input new sex: "; cin >> this ->sex;
	cout << "Input new age: "; cin >> a;
	cout << "Input new weight: "; cin >> w;
	if (a > 0 && w > 0) {
		this->age = a;
		this->weight = w;
	}
	else {
		cout << "Wrong arguments!" << endl;
		exit(0);
	}

}

void Man::Display() {
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
	cout << "Sex: " << this->sex << endl;
	cout << "Weight: " << this->weight << endl;
}