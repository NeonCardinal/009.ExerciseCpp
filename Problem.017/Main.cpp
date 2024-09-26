//Задача 17: Разлика между две дробни числа
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double b;

    cout << "a = ";
    cin >> a;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }
    cout << "b = ";
    cin >> b;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    double raz = fabs(a - b);

    cout << "Razlikata m/u a - b e: " << raz << endl;

    return 0;
}