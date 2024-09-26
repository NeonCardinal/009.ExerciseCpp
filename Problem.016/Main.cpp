//Задача 16: Средно аритметично на N числа
#include <iostream>

using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    
    cout << "n = ";
    cin >> n;
    if(!cin)
    {
        cout << "Error, bad input!" << endl;
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        double input;
        cin >> input;
        sum += input;
    }

    double avg = sum / n;

    cout << "avg = " << avg << endl;

    return 0;
}