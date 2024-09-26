//Задача 10: Температурен конвертор
#include <iostream>

using namespace std;

int main()
{
    double celsius;
    double fahrenheit;

    cout << "celsius  = ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;

    cout << "fahrenheit = " << fahrenheit << endl;

    return 0;
}