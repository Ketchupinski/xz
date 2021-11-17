#include "Matrix.h"

void Matrix::Create() {
	matr = new int* [K];
	for (int i = 0; i < K; i++)
		matr[i] = new int[N];

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			matr[i][j] = 0;
		}
	}
}

Matrix::Matrix() {
	N = 0;
	K = 0;
	matr = nullptr;
}

Matrix::Matrix(int K, int N) {
	if (N > 0 && K > 0) {
		this->N = N;
		this->K = K;
		this->Create();
	}
	else {
		exit(0);
	}
}

Matrix::Matrix(Matrix& m) {
	this->N = m.N;
	this->K = m.K;
	this->Create();
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			this->matr[i][j] = m.matr[i][j];
		}
	}
}

Matrix::~Matrix()
{
	for (int z = 0; z < K; z++)
		delete[] matr[z];
	delete[] matr;
}

void Matrix::Read() {
	int n, k;
	do {
		cout << "Input K: "; cin >> k;
		cout << "Input N: "; cin >> n;
	} while (!(Init(k, n)));
	Matrix temp(k, n);
	this->N = temp.N;
	this->K = temp.K;
	this->Create();
	int z = 0;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			cout << "Input number to matrix: "; cin >> z;
			this->matr[i][j] = z;
		}
	}
}

void Matrix::Display() {
	cout << endl;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			cout << this->matr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

bool Matrix::Init(int K, int N) {
	if (K > 0 && N > 0) {
		return true;
	}
	else {
		return false;
	}
}


void Matrix::Scalar(int s) {
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			matr[i][j] = s * matr[i][j];
		}
	}
}

double Matrix::Norm() {
	double norm = 0;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			norm += pow(matr[i][j], 2);
		}
	}
	return sqrt(norm);
}

bool Matrix::operator==(Matrix m) {
	if (this->K == m.K && this->N == m.N) {
		for (int i = 0; i < K; i++) {
			for (int j = 0; j < N; j++) {
				if (this->matr[i][j] != m.matr[i][j]) {
					return false;
				}
			}
		}
		return true;
	}
	else {
		return false;
	}
}

bool Matrix::operator!=(Matrix m) {
	if (this->K == m.K && this->N == m.N) {
		for (int i = 0; i < K; i++) {
			for (int j = 0; j < N; j++) {
				if (this->matr[i][j] != m.matr[i][j]) {
					return true;
				}
			}
		}
		return false;
	}
	else {
		return true;
	}
}

bool Matrix::operator>(Matrix m) {
	double sum_1 = 0;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			sum_1 += matr[i][j];
		}
	}

	double sum_2 = 0;
	for (int i = 0; i < m.K; i++) {
		for (int j = 0; j < m.N; j++) {
			sum_2 += matr[i][j];
		}
	}

	if (sum_1 > sum_2) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrix::operator<(Matrix m) {
	double sum_1 = 0;
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			sum_1 += matr[i][j];
		}
	}

	double sum_2 = 0;
	for (int i = 0; i < m.K; i++) {
		for (int j = 0; j < m.N; j++) {
			sum_2 += m.matr[i][j];
		}
	}

	if (sum_1 < sum_2) {
		return true;
	}
	else {
		return false;
	}
}