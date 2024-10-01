//Задача 40: Изчисляване на процент
#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    double percent = (a / b) * 100.0;

    cout << percent << endl;

    return 0;
}