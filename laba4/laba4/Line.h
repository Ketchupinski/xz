/*���������� ���� Line. ˳���� ������� y = Ax + B. ���� first � ����� �����,
���������� �; ���� second � ����� �����, ���������� �(A �� ������� ����).

���������� ����� root() � ���������� ������ ������� �������.����� ��
��������� �������� ����������� A ����.
*/


#pragma once

#include <iostream>

using namespace std;

class Line
{
private:
	int first, second;
public:
	Line();
	Line(int, int);
	Line(Line&);
	~Line();
	bool Init(int, int);
	void Read();
	double root();
	void Display() const;
};

