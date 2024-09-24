//Задача 7: Програма за размяна на стойности
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}