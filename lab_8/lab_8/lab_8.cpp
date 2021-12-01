/*
Створити клас Triad (трійка чисел); визначити методи збільшення полів на 1.
Визначити клас-контейнер Date, що містить поле «трійка чисел» – трійка чисел
описує рік, місяць і день.
Перевизначити методи збільшення полів на 1 і визначити метод збільшення дати
на п днів
*/

#include "Date.h"

int main()
{
	Date::Triad t(2, 3, 2000);
	t.IncreaseNumber1();
	t.IncreaseNumber2();
	t.IncreaseNumber3();

	Date d(t);

	cout << endl;
	cout << "Date(d):" << d << endl;

	d.IncreaseNumber1();
	d.IncreaseNumber2();
	d.IncreaseNumber3();

	cout << endl;
	cout << "Date(d):" << d << endl;

	d.UpToDate();
	d.IncreaseDate();
	cout << endl;

	cout << endl;
	cout << "Date(d):" << d << endl;

	cout << endl;
	d++;
	cout << "d++: " << d << endl;

	cout << endl;
	d--;
	cout << "d--: " << d << endl;

	cout << endl;
	++d;
	cout << "++d: " << d << endl;

	cout << endl;
	--d;
	cout << "--d: " << d << endl;

	cout << endl << endl;
	cout << "t: " << t << endl;

	cout << endl;
	++t;
	cout << "++t: " << t << endl;

	cout << endl;
	--t;
	cout << "--t: " << t << endl;

	cout << endl;
	t++;
	cout << "t++: " << t << endl;

	cout << endl;
	t--;
	cout << "t--: " << t << endl;

	cout << "Date counter: " << d.getCounter() << endl;
	cout << "Triad counter: " << t.getCounter() << endl;
}
