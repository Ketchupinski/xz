/*
Створити клас комплексне число. Перевантажити операції порівняння
комплексних чисел !=, ==, >, =, <= та операції потокового введення-виведення.
*/

#include "Complex.h"

int main()
{
	Complex a, b;
	cin >> a;
	cout << endl << endl;
	cin >> b;
	cout << endl << endl;

	bool x;

	x = a == b;
	cout << "a == b: " << x << endl;

	x = a != b;
	cout << "a != b: " << x << endl;

	x = a > b;
	cout << "a > b: " << x << endl;

	x = a <= b;
	cout << "a <= b: " << x << endl;

	cout << endl << "a = b" << endl;
	a = b;
	cout << "a: " << endl << a;

}
