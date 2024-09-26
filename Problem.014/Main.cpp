//Задача 14: Преобразуване на метри в километри
#include <iostream>

using namespace std;

int main()
{
    double meters;

    cout << "meters = ";
    cin >> meters;

    double kilometers = meters / 1000.0;

    cout << meters << "m = " << kilometers << "km" << endl;

    return 0;
}