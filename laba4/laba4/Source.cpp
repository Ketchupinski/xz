/*Реалізувати клас Line. Лінійне рівняння y = Ax + B. Поле first – дійсне число,
коефіцієнт А; поле second – дійсне число, коефіцієнт В(A не дорівнює нулю).

Реалізувати метод root() – обчислення кореня лінійного рівняння.Метод має
перевіряти нерівність коефіцієнта A нулю.
*/

#include "Line.h"

int main()
{
	Line l;
	l.Read();
	l.Display();
	cout << "root: " << l.root();

	Line x;
	x = l;
	cout << endl << endl << "Clone object: " << endl;
	l.Display();
}

