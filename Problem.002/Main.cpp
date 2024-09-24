//Задача 2: Изчисляване на средна стойност
#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double avg = (a + b + c) / 3;

    cout << "avg = " << avg << endl;

    return 0;
}