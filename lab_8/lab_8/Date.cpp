/*
—творити клас Triad (тр≥йка чисел); визначити методи зб≥льшенн€ пол≥в на 1.
¬изначити клас-контейнер Date, що м≥стить поле Ђтр≥йка чиселї Ц тр≥йка чисел
описуЇ р≥к, м≥с€ць ≥ день.
ѕеревизначити методи зб≥льшенн€ пол≥в на 1 ≥ визначити метод зб≥льшенн€ дати
на п дн≥в
*/

#include "Date.h"

int Date::counter = 0;
int Date::Triad::counter = 0;

Date::Triad::Triad() {
	num1 = 0;
	num2 = 0;
	num3 = 0;
	Date::Triad::counter++;
}

Date::Triad::Triad(int num1, int num2, int num3) {
	this->num1 = num1;
	this->num2 = num2;
	this->num3 = num3;
	Date::Triad::counter++;
}

Date::Triad::Triad(Triad& t) {
	this->num1 = t.num1;
	this->num2 = t.num2;
	this->num3 = t.num3;
	Date::Triad::counter++;
}

Date::Triad::~Triad() {
	Date::Triad::counter--;
}

void Date::Triad::IncreaseNumber1() {
	this->num1++;
}

void Date::Triad::IncreaseNumber2() {
	this->num2++;
}

void Date::Triad::IncreaseNumber3() {
	this->num3++;
}

Date::Triad& Date::Triad::operator = (const Triad& t) {
	this->num1 = t.num1;
	this->num2 = t.num2;
	this->num3 = t.num3;
	return *this;
}

Date::Triad::operator string () const {
	cout << endl;
	stringstream ss;
	ss << "num1: " << this->num1 << endl;
	ss << "num2: " << this->num2 << endl;
	ss << "num3: " << this->num3 << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Date::Triad& t) {
	out << string(t);
	return out;
}

istream& operator >> (istream& in, Date::Triad& t) {
	cout << endl;
	cout << "num1: "; in >> t.num1;
	cout << "num2: "; in >> t.num2;
	cout << "num3: "; in >> t.num3;
	return in;
}

Date::Triad& Date::Triad::operator ++ () {
	++num1;
	return *this;
}

Date::Triad& Date::Triad::operator -- () {
	--num1;
	return *this;
}

Date::Triad& Date::Triad::operator ++ (int) {
	num2++;
	return *this;
}

Date::Triad& Date::Triad::operator -- (int) {
	num2--;
	return *this;
}

Date::Date() {
	this->triad = Triad();
	Date::counter++;
}

Date::Date(int day, int mounth, int year) {
	if (day > 0 && day <= 31) {
		if (mounth > 0 && mounth <= 12) {
			if (year > 0) {
				Date::counter++;
				this->triad = Triad(day, mounth, year);
			}
			else {
				exit(0);
			}
		}
		else {
			exit(0);
		}
	}
	else {
		exit(0);
	}
}

Date::Date(Triad triad) {
	this->triad = triad;
	Date::counter++;
}

Date::Date(Date& date) {
	this->triad = date.triad;
	Date::counter++;
}

Date::~Date() {
	Date::counter--;
}

void Date::UpToDate() {
	int days = triad.GetNum1();
	int mounth = triad.GetNum2();
	int year = triad.GetNum3();

	while (days > 31) {
		days -= 31;
		mounth++;
	}
	while (mounth > 12) {
		mounth -= 12;
		year++;
	}

	triad.SetNum1(days);
	triad.SetNum2(mounth);
	triad.SetNum3(year);
}

void Date::IncreaseDate() {
	int n = 0;
	cout << "Input how much days add to date: "; cin >> n;
	int d = triad.GetNum1();
	triad.SetNum1(d + n);

	UpToDate();
}

void Date::IncreaseNumber1() {
	int num = this->triad.GetNum1();
	num++;
	this->triad.SetNum1(num);
}

void Date::IncreaseNumber2() {
	int num = this->triad.GetNum2();
	num++;
	this->triad.SetNum2(num);
}

void Date::IncreaseNumber3() {
	int num = this->triad.GetNum3();
	num++;
	this->triad.SetNum3(num);
}


Date& Date::operator = (Date& d) {
	this->triad.SetNum1(d.triad.GetNum1());
	this->triad.SetNum2(d.triad.GetNum2());
	this->triad.SetNum3(d.triad.GetNum3());
	return *this;
}

Date::operator string () const{
	stringstream ss;
	cout << endl;
	ss << this->triad << endl;
	return ss.str();
}

ostream& operator << (ostream& out, Date& d) {
	out << string(d);
	return out;
}

istream& operator >> (istream& in, Date& day) {
	int d, m, y;
	cout << endl;
	cout << "Day:: "; in >> d;
	cout << "Mounth: "; in >> m;
	cout << "Year: "; in >> y;

	day.triad.SetNum1(d);
	day.triad.SetNum2(m);
	day.triad.SetNum3(y);
	return in;
}

Date& Date::operator ++ () {
	int year = this->triad.GetNum3();
	this->triad.SetNum3(++year);
	return *this;
}

Date& Date::operator -- () {
	int year = this->triad.GetNum3();
	this->triad.SetNum3(--year);
	return *this;
}

Date& Date::operator ++ (int) {
	triad++;
	return *this;
}

Date& Date::operator -- (int) {
	triad--;
	return *this;
}