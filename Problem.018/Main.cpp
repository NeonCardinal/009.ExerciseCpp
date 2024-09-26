//Задача 18: Преобразуване на часове в секунди
#include <iostream>

using namespace std;

int main()
{
    int hours;

    cout << "hours = ";
    cin >> hours;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    int seconds = hours * 60 * 60;

    cout << hours << " hours = " << seconds << " seconds" << endl;

    return 0;
}