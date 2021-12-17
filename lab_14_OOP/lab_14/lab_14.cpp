/*
Функція, яка обчислює суму геометричної прогресії
Виняткова ситуація генерується, коли r = 1.
*/

#include <iostream>
#include <string>
#include <exception>
#include "Progression.h"

using namespace std;

void FU()
{
	cout << "unexpected error! - bad_exception" << endl;
	throw;
}
void FT()
{
	cout << "unknown error! - terminate" << endl;
	abort();
}

int main()
{
	set_unexpected(FU);
	set_terminate(FT);

	Progression p(1, 2);

	try
	{
		p.GetProgression();
	}
	catch (...)
	{
		cout << " catch (...) <= GetProgression()" << endl;
	}


	try {
		p.GetProgression1();
	}
	catch (bad_exception)
	{
		cout << " catch (bad_exception) <= GetProgression1()" << endl;
	}


	try {
		p.GetProgression2();
	}
	catch (char)
	{
		cout << " catch (char) <= GetProgression2()" << endl;
	}

	try {
		p.GetProgression3();
	}
	catch (int)
	{
		cout << " catch (int) <= GetProgression3" << endl;
	}

	try {
		p.GetProgression4();
	}
	catch (Error e)

	{
		cout << " catch (Error) <= GetProgression4() :" << endl;
		cout << e.What() << endl;
	}
}