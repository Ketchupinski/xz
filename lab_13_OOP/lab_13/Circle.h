#pragma once
#include "Figure.h"
class Circle : public Figure
{
public:
    Circle();
    Circle(int a);
    Circle(Circle& c);
    ~Circle();

    virtual int squ();
    virtual int per();
};

