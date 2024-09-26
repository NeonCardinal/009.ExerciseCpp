//Задача 11: Изчисляване на обем на куб
#include <iostream>

using namespace std;

int main()
{
    double width;

    cout << "width = ";
    cin >> width;

    double volume = width * width * width;

    cout << "volume = " << volume << endl;

    return 0;
}