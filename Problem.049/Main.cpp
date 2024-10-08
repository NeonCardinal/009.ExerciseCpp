//Задача 49: Преобразуване на литри в галони
#include <iostream>

using namespace std;

int main()
{
    double litters;

    cout << "litters = ";
    cin >> litters;

    double galons = litters * 3.78541;

    cout << galons << endl;

    return 0;
}