//Задача 34: Изчисляване на ДДС
#include <iostream>

using namespace std;

int main()
{
    double price;

    cout << "price = ";
    cin >> price;

    double percent = price / 6.0;

    cout << percent << endl;

    return 0;
}