/*
Створити абстрактний базовий клас Figure з віртуальними методами обчислення
площі і периметру. Створити похідні класи: Rectangle (прямокутник), Circle (круг),
Trapezium (трапеція) з своїми функціями площі і периметру. Самостійно визначити,
які поля необхідні, які з них можна задати в базовому класі, а які – в похідних.
*/

#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Trapezium.h"
#include "Rectangle.h"

int main()
{
    Rectangle r(2, 1);
    cout << "Rectangle: " << endl;
    cout << "square: " << r.squ() << endl;
    cout << "perimetr: " << r.per() << endl;

    cout << endl << endl;

    Circle c(5);
    cout << "Circle:" << endl;
    cout << "square: " << c.squ() << endl;
    cout << "perimetr: " << c.per() << endl;

    cout << endl << endl;
 
    Trapezium t(6, 2, 3, 7);
    cout << "Trapezium:" << endl;
    cout << "square: " << t.squ() << endl;
    cout << "perimetr: " << t.per() << endl;

    cout << endl << endl;
}
