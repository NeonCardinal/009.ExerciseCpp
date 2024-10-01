//Задача 35: Проверка за делимост на 3 и 5
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "number = ";
    cin >> number;

    if(number % 3 == 0)
    {
        cout << "Yes, by 3" << endl;
    }
    else if(number % 5 == 0)
    {
        cout << "Yes, by 5" << endl;
    }
    else if(number % 3 == 0 && number % 5 == 0)
    {
        cout << "Yes, by 3 and 5" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}