//Задача 36: Преобразуване на мили в крачки
#include <iostream>

using namespace std;

int main()
{
    int mile;

    cout << "mile = ";
    cin >> mile;

    int steps = mile * 2000;

    cout << steps << endl;

    return 0;
}