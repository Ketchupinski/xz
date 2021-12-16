#pragma once
#include "Figure.h"
class Trapezium : 
    public Figure
{
private:
    int z, x, c; // a = z , b = x, c = c
public:
    Trapezium();
    Trapezium(int, int, int, int);
    Trapezium(Trapezium&);
    ~Trapezium();

    void Set_z(int);
    void Set_x(int);
    void Set_c(int);
    int get_z() { return z; }
    int get_x() { return x; }
    int get_c() { return c; }

    virtual int squ();
    virtual int per();
};

