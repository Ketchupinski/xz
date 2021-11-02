/*Реалізувати клас Line. Лінійне рівняння y = Ax + B. Поле first – дійсне число,
коефіцієнт А; поле second – дійсне число, коефіцієнт В(A не дорівнює нулю).

Реалізувати метод root() – обчислення кореня лінійного рівняння.Метод має
перевіряти нерівність коефіцієнта A нулю.
*/
#include "Line.h"

Line::Line() {
    this->first = 0;
    this->second = 0;
}

Line::Line(int first, int second) {
    this->first = first;
    this->second = second;
}

Line::Line(Line& l) {
    this->first = l.first;
    this->second = l.second;
}

Line::~Line() {

}

bool Line::Init(int A, int B)
{
    if (A != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Line::Read()
{
    int A, B;
    do
    {
        cout << "Please, throw me some numbers:" << endl;
        cout << " A = "; cin >> A;
        cout << " B = "; cin >> B;
    } while (!Init(A, B));
    Line temp(A, B);
    this->first = temp.first;
    this->second = temp.second;
}
void Line::Display() const
{
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << " A = " << first << endl;
    cout << " B = " << second << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
}


double Line::root()
{
    return second * (-1) / first;
}

