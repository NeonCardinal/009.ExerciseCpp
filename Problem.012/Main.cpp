//Задача 12: Разлика между две числа
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int raz = abs(a - b);

    cout << "razlikata e: " << raz << endl;

    return 0;
}