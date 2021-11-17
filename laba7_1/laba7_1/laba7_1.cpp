#include "Matrix.h"

int main() {
	Matrix m;
	m.Read();
	m.Display();

	Matrix s = m;
	int scal;
	cout << "Scalar: "; cin >> scal;
	s.Scalar(scal);
	s.Display();

	cout << "Norma: " << s.Norm() << endl;

	cout << endl;

	bool check;

	check = m == s;
	cout << "m == s: " << check << endl;

	check = m != s;
	cout << "m != s: " << check << endl;

	check = m > s;
	cout << "m > s: " << check << endl;

	check = m < s;
	cout << "m < s: " << check << endl;


}