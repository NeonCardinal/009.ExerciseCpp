//Задача 50: Проверка за триъгълник
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

    if(a + b > c)
    {
        cout << "yes" << endl;
    }
    else if(b + c > a)
    {
        cout << "yes" << endl;
    }
    else if(c + a > b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}