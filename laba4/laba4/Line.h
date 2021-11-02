/*Реалізувати клас Line. Лінійне рівняння y = Ax + B. Поле first – дійсне число,
коефіцієнт А; поле second – дійсне число, коефіцієнт В(A не дорівнює нулю).

Реалізувати метод root() – обчислення кореня лінійного рівняння.Метод має
перевіряти нерівність коефіцієнта A нулю.
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

