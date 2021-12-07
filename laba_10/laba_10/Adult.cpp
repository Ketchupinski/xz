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
	if (pass_num > 0) {
		this->pass_num = pass_num;
	}
	else {
		cout << "Wrong arguments!" << endl;
		exit(0);
	}
}

Adult::Adult(Man m, int pass_num) : Man(m) {
	if (pass_num > 0) {
		this->pass_num = pass_num;
	}
	else {
		cout << "Wrong arguments!" << endl;
		exit(0);
	}
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

void Adult::Change() {
	Man::Change();
	int pass_num;
	cout << "Input new passport number: "; cin >> pass_num;
	if (pass_num > 0) {
		this->pass_num = pass_num;
	}
	else {
		cout << "Wrong arguments given!" << endl;
		exit(0);
	}
}