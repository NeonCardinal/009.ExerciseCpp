//Задача 19: Произведение на три числа
#include <iostream>

using namespace std;

int main()
{
    int firstnum;
    int secondnum;
    int thirdnum;

    cout << "first number = ";
    cin >> firstnum;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }
    cout << "second number = " << endl;
    cin >> secondnum;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }
    cout << "third number = ";
    cin >> thirdnum;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    double result = firstnum * secondnum * thirdnum;

    cout << result << endl;

    return 0;
}