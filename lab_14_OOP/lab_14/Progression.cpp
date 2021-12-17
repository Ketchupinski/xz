#include "Progression.h"

Progression::Progression(int r, int a) {
	this->r = r;
	this->a = a;
}


int* Progression::GetProgression() {
	if (r == 1) {
		throw 1;
	}
	int S[10];
	int A[10];
	A[0] = a;

	for (int i = 1; i < 10; i++) {
		A[i] = a * i;
	}

	for (int n = 0; n < 10; n++) {
		S[n] = (A[0] - A[n] * r) / (1 - r);
	}
	return S;
}

int* Progression::GetProgression1() throw() {
	if (r == 1) {
		throw bad_exception();
	}
	int S[10];
	int A[10];
	A[0] = a;

	for (int i = 1; i < 10; i++) {
		A[i] = a * i;
	}

	for (int n = 0; n < 10; n++) {
		S[n] = (A[0] - A[n] * r) / (1 - r);
	}
	return S;
}

int* Progression::GetProgression2() throw(char) {
	if (r == 1) {
		throw '1';
	}
	int S[10];
	int A[10];
	A[0] = a;

	for (int i = 1; i < 10; i++) {
		A[i] = a * i;
	}

	for (int n = 0; n < 10; n++) {
		S[n] = (A[0] - A[n] * r) / (1 - r);
	}
	return S;
}

int* Progression::GetProgression3() throw(int) {
	if (r == 1) {
		throw 1;
	}
	int S[10];
	int A[10];
	A[0] = a;

	for (int i = 1; i < 10; i++) {
		A[i] = a * i;
	}

	for (int n = 0; n < 10; n++) {
		S[n] = (A[0] - A[n] * r) / (1 - r);
	}
	return S;;
}

int* Progression::GetProgression4() throw(Error) {
	if (r == 1) {
		throw Error("r can't be 1!");
	}
	int S[10];
	int A[10];
	A[0] = a;

	for (int i = 1; i < 10; i++) {
		A[i] = a * i;
	}

	for (int n = 0; n < 10; n++) {
		S[n] = (A[0] - A[n] * r) / (1 - r);
	}
	return S;
}




