/*
Функція, яка обчислює суму геометричної прогресії
Виняткова ситуація генерується, коли r = 1.
*/
#pragma once
#include "Error.h"
#include <exception>

using namespace std;

class Progression
{
private:
	int r;
	int a;
public:
	Progression(int r, int a);
	int GetR() { return r; }
	int* GetProgression();
	int* GetProgression1() throw();
	int* GetProgression2() throw(char);
	int* GetProgression3() throw(int);
	int* GetProgression4() throw(Error);
};

