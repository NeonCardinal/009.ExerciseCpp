//Задача 23: Квадрат на число
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "num = ";
    cin >> num;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    int pownum = num * num;

    cout << pownum << endl;

    return 0;

}