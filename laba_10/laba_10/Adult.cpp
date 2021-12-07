/*
�������� ���� ������, �� �� ��� (�������� �� �����), ��, ����. ���������
������������, ���������� � ������� ���������. �������� public-������ ����� �
���������, �� �� ����� ��������, �� ������, �� �������� �� ������� �����.
��������� ������������ �� ���������� � � ����� ������ ���������, �����������,
������� ���������. ��������� ������� ��������������� ��� � ������ ��������.
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