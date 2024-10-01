//Задача 39: Преобразуване на цени от долари в лева
#include <iostream>

using namespace std;

int main()
{
    double dollars;
    double leva;
    double kurs;

    cout << "dolari = ";
    cin >> dollars;
    cout << "kurs = ";
    cin >> kurs;

    leva = dollars * kurs;

    cout << leva << endl;

    return 0;
}