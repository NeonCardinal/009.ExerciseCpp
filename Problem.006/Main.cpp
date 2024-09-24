//Задача 6: Изчисляване на факториел
#include <iostream>

using namespace std;

int main()
{
    int number;
    unsigned long faktoriel = 1;

    cout << "number = ";
    cin >> number;
    if(number == 0)
    {
        cout << "Error, number must be greater than zero!" << endl;
        return 1;
    }

    for(int i = 1; i <= number; i++)
    {
        faktoriel *= i;
    }

    cout << number << "! = " << faktoriel << endl;

    return 0;
}