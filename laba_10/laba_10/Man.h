/*
�������� ���� ������, �� �� ��� (�������� �� �����), ��, ����. ���������
������������, ���������� � ������� ���������. �������� public-������ ����� �
���������, �� �� ����� ��������, �� ������, �� �������� �� ������� �����.
��������� ������������ �� ���������� � � ����� ������ ���������, �����������,
������� ���������. ��������� ������� ��������������� ��� � ������ ��������.
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
	void SetAge(int age) { this->age = age; }
	void SetWeight(int weight) { this->weight = weight; }
	string* GetName() { return name; }
	int GetAge() { return age; }
	int GetWeight() { return weight; }

	Man();
	Man(string* name, int age, int weight);
	Man(Man& m);
	~Man();

	void Display();

	Man& operator++();
	Man& operator--();
	Man& operator++(int);
	Man& operator--(int);
};

