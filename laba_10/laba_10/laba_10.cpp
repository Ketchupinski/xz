/*
Створити клас людина, що має ім’я (вказівник на рядок), вік, вагу. Визначити
конструктори, деструктор і функцію виведення. Створити public-похідні класи –
повнолітній, що має номер паспорта, та школяр, що належить до певного класу.
Визначити конструктори за умовчанням і з різним числом параметрів, деструктори,
функцію виведення. Визначити функції перепризначення віку і номера паспорта.
*/
#include "Man.h"
#include "Adult.h"
#include "School.h"

int main()
{
    string name = "Yosyp";
    string* n = &name;
    Man m(n, 19, 100);
    m.Display();
    cout << endl;
    m.Change();
    cout << endl;
    m.Display();

    m++;
    cout << endl << "m++" << endl;
    m.Display();

    cout << endl << endl;
    Adult a(m, 12412412);
    a.Display();
    cout << endl;
    a.Change();
    cout << endl;
    a.Display();

    a++;
    cout << endl << "a++" << endl;
    a.Display();

    cout << endl << endl;
    string boy_name = "Lil";
    n = &boy_name;
    School s(n, 8, 40, 3);
    s.Display();
    cout << endl;
    s.Change();
    cout << endl;
    s.Display();

    s++;
    cout << endl << "s++" << endl;
    s.Display();

}