//Задача 4: Обратен ред на цифрите
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "number = ";
    cin >> number;

    while(number != 0)
    {
        cout << number % 10;
        number /= 10;
    }

    cout << endl;

    return 0;
}