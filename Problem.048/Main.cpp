//Задача 48: Изчисляване на наклон на права
#include <iostream>

using namespace std;

int main()
{
    double x1;
    double x2;
    double y1;
    double y2;

    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y2;
    cout << "x2 = " ;
    cin >> x2;
    cout << "y2 = " ;
    cin >> y2;

    if(x1 == x2)
    {
        cout << "vertikalna" << endl;
    }
    else
    {
        cout << (y2 - y1) / (x2 - x1) << endl;
    }

    return 0;
}