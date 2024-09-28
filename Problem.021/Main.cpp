//Задача 21: Проверка за положително или отрицателно число
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "number = ";
    cin >> number;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    if(number < 0)
    {
        cout << "negative" << endl;
    }
    else if(number > 0)
    {
        cout << "possitive" << endl;
    }
    else if(number == 0)
    {
        cout << "zero" << endl;;
    }

    return 0;
}