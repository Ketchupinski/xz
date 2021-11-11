#include "Fraction.h"

int main()
{
	Fraction f;
	f.Read();
	f.Display();

	++f;
	cout << endl << "++f: " << endl;
	f.Display();
	cout << endl << "--f: " << endl;
	--f;
	f.Display();

	f++;
	cout << "f++: " << endl;
	f.Display();
	cout << "f--: " << endl;
	f--;
	f.Display();

	Fraction f2(1, 2);

	bool check;
	check = f == f2;
	cout << "f == f2: " << check << endl;

	check = f != f2;
	cout << "f != f2: " << check << endl;
	
	check = f > f2;
	cout << "f > f2: " << check << endl;

	check = f < f2;
	cout << "f < f2: " << check << endl;
}

