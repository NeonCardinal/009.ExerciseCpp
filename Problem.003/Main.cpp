//Задача 3: Проверка за четност
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "num = ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}