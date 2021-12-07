/*
�������� ���� ������, �� �� ��� (�������� �� �����), ��, ����. ���������
������������, ���������� � ������� ���������. �������� public-������ ����� �
���������, �� �� ����� ��������, �� ������, �� �������� �� ������� �����.
��������� ������������ �� ���������� � � ����� ������ ���������, �����������,
������� ���������. ��������� ������� ��������������� ��� � ������ ��������.
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

