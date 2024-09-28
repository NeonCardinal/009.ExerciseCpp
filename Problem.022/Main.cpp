//Задача 22: Конвертор на мили в километри
#include <iostream>

using namespace std;

int main()
{
    double mils;

    cout << "mils = ";
    cin >> mils;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    double kilometers = mils * 1.60934;

    cout << kilometers << endl;

    return 0;
}