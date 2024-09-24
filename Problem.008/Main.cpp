//Задача 8: Проверка за делимост
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

    if(a % b != 0)
    {
        cerr << "Error, cant divide!" << endl;
        return 0;
    }
}