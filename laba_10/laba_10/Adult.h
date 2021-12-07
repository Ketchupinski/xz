/*
�������� ���� ������, �� �� ��� (�������� �� �����), ��, ����. ���������
������������, ���������� � ������� ���������. �������� public-������ ����� �
���������, �� �� ����� ��������, �� ������, �� �������� �� ������� �����.
��������� ������������ �� ���������� � � ����� ������ ���������, �����������,
������� ���������. ��������� ������� ��������������� ��� � ������ ��������.
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

