#include <iostream>

using namespace std;

#pragma once
class Figure
{
private: 
	int a;
public:
	Figure();
	Figure(int);
	Figure(Figure&);
	~Figure();

	int get_a() { return a; }

	virtual int squ() = 0;
	virtual int per() = 0;
};

