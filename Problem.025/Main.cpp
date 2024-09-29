//Задача 25: Средно геометрично на две числа
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    if(a < 0 || b < 0)
    {
        cout << "Error, values must be greater than zero!" << endl;
        return 1;
    }

    double avg = sqrt(a + b);

    cout << avg << endl;

    return 0;
}