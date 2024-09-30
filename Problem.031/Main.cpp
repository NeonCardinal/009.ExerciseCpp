//Задача 31: Разлика между максимално и минимално число
#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    double min;
    double max;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    min = a;
    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }

    max = a;
    if(b > a)
    {
        max = b;
    }
    if(c > min)
    {
        max = c;
    }

    double result = abs(max - min);

    cout << result << endl;

    return 0;
}