/*Створити клас Man(людина) з полями : ім’я, вік, стать і вага.Визначити методи
переприсвоєння імені, зміни віку і зміни ваги.

Створити похідний Student, що має поле «курс».Визначити методи пере -
присвоєння та збільшення курсу.
*/
#include <iostream>
#include <string>

using namespace std;

#pragma once
class Man
{
private:
	string name;
	int age;
	string sex;
	int weight;
public:
	Man();
	Man(string name, int age, string sex, int weight);
	Man(Man&);
	~Man();

	string GetName() { return name; }
	string GetSex() { return sex; }
	int GetAge() { return age; }
	int GetWeight() { return weight; }

	void SetName(string name) { this->name = name; }
	void SetSex(string sex) { this->sex = sex; }
	void SetAge(int age);
	void SetWeight(int weight);

	void Change();
	void Display();
};

