//Задача 47: Преобразуване на градуси Фаренхайт в Целзий
#include <iostream>

using namespace std;

int main()
{
    double fahrenheit;

    cout << "fahrenheit = ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5 / 9.0;

    cout << fahrenheit << "f = " << celsius << "c" << endl;

    return 0;
}