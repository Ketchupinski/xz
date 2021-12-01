/*
—творити клас Triad (тр≥йка чисел); визначити методи зб≥льшенн€ пол≥в на 1.
¬изначити клас-контейнер Date, що м≥стить поле Ђтр≥йка чиселї Ц тр≥йка чисел
описуЇ р≥к, м≥с€ць ≥ день.
ѕеревизначити методи зб≥льшенн€ пол≥в на 1 ≥ визначити метод зб≥льшенн€ дати
на п дн≥в
*/

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date
{
private:
	static int counter;
public:
	class Triad {
	private:
		int num1;
		int num2;
		int num3;
		static int counter;
	public:
		Triad();
		Triad(int, int, int);
		Triad(Triad&);
		~Triad();

		void SetNum1(int num1) { this->num1 = num1; };
		void SetNum2(int num2) { this->num2 = num2; };
		void SetNum3(int num3) { this->num3 = num3; };

		int GetNum1() { return num1; };
		int GetNum2() { return num2; };
		int GetNum3() { return num3; };

		static int getCounter() { return counter; };

		void IncreaseNumber1();
		void IncreaseNumber2();
		void IncreaseNumber3();

		Triad& operator = (const Triad& t);
		operator string () const;
		friend ostream& operator << (ostream& out, const Triad& t);
		friend istream& operator >> (istream& in, Triad& t);
		Triad& operator ++ ();
		Triad& operator -- ();
		Triad& operator ++ (int);
		Triad& operator -- (int);
	};
private:
	Triad triad;
public:
	Date();
	Date(Triad);
	Date(int, int, int);
	Date(Date&);
	~Date();

	void SetTriad(Triad triad) { this->triad = triad; };
	void SetDay(int day) { this->triad.SetNum1(day); };
	void SetMounth(int mounth) { this->triad.SetNum2(mounth); };
	void SetYear(int year) { this->triad.SetNum3(year); };

	Triad GetTriad() { return this->triad; };
	int GetDay() { return this->triad.GetNum1(); };
	int GetMounth() { return this->triad.GetNum2(); };
	int GetYear() { return this->triad.GetNum3(); };

	static int getCounter() { return counter; };

	void IncreaseDate();
	void UpToDate();
	void IncreaseNumber1();
	void IncreaseNumber2();
	void IncreaseNumber3();

	Date& operator = (Date& d);
	operator string () const;
	friend ostream& operator << (ostream& out, Date& d);
	friend istream& operator >> (istream& in, Date& d);
	Date& operator ++ ();
	Date& operator -- ();
	Date& operator ++ (int);
	Date& operator -- (int);
};

