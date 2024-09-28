//Задача 24: Квадратен корен на число
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num;

    cout << "num = ";
    cin >> num;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    double sqrtnum = sqrt(num);

    cout << sqrtnum << endl;

    return 0;
}