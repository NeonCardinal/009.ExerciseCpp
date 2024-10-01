//Задача 32: Средна температура
#include <iostream>

using namespace std;

int main()
{
    double sum = 0.0;

    for(int i = 0; i < 7; i++)
    {
        double temperature;
        cout << "temperature: ";
        cin >> temperature;

        sum += temperature;
    }

    double result = sum / 7;

    cout << "Avg. temperature = " << result << endl;

    return 0;
}