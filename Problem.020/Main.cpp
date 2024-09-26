//Задача 20: Отклонение от средно
#include <iostream>

using namespace std;

int main()
{
    double firstnumber;
    double secondnumber;
    double thirdnumber;

    cout << "first number = ";
    cin >> firstnumber;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }
    cout << "second number = ";
    cin >> secondnumber;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }
    cout << "third number = ";
    cin >> thirdnumber;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    double avg = (firstnumber + secondnumber + thirdnumber) / 3;

    cout << "Отклонение на " << firstnumber << " от средното: " << firstnumber - avg << endl;
    cout << "Отклонение на " << secondnumber << " от средното: " << secondnumber - avg << endl;
    cout << "Отклонение на " << thirdnumber << " от средното: " << thirdnumber - avg << endl;

    return 0;
}