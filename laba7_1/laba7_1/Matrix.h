/*
Варіант 10.
Описати клас, який представляє матрицю із КN цілих чисел.
Реалізувати операції
• множення матриці на скаляр;
• порівняння матриць;
• обчислення норми матриць (корінь із суми квадратів елементів).
*/

#pragma once
#include <iostream>
using namespace std;

class Matrix
{
private:
	int N;
	int K;
	int** matr;
public:
	int getN() { return this->N; };
	int getK() { return this->K; };
	void setN(int N) { this->N = N; };
	void setK(int K) { this->K = K; };
	Matrix();
	Matrix(int, int);
	Matrix(Matrix&);
	~Matrix();
	void Create();
	void Read();
	void Display();
	bool Init(int N, int K);
	void Scalar(int);
	double Norm();
	bool operator ==(Matrix m);
	bool operator !=(Matrix m);
	bool operator >(Matrix m);
	bool operator <(Matrix m);

};

