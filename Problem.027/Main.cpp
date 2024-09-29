//Задача 27: Обратна стойност на число
#include <iostream>

using namespace std;

int main()
{
    double num;
    double result;

    cout << "num = ";
    cin >> num;

    if(num == 0)
    {
        cerr << "Error, num must be != 0";
        return 1;
    }
    else
    {
        result = 1 / num;
    }

    cout << result << endl;

    return 0;
}