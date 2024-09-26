//Задача 13: Максимално от три числа
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }

    cout << "max = " << max << endl;

    return 0;
}