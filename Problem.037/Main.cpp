//Задача 37: Изчисляване на площ на триъгълник
#include <iostream>

using namespace std;

int main()
{
    int a;
    int h;

    cout << "a = ";
    cin >> a;
    cout << "h = ";
    cin >> h;

    double area = 0.5 * a * h;

    cout << area << endl;

    return 0;
}