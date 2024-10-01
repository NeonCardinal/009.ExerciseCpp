//Задача 41: Разширено конвертиране на валута
#include <iostream>
#include <iomanip>

using namespace std;

const double GBP = 2.34;
const double EU = 1.95;
const double US = 1.74;

int main()
{
    double leva;

    cout << "leva = ";
    cin >> leva;

    double liri = leva / GBP;
    double evro = leva / EU;
    double dolari = leva / US;

    cout << leva << "BGN = " << liri << "GBP" << endl;
    cout << leva << "BGN = " << evro << "EU" << endl;
    cout << leva << "BGN = " << dolari << "US" << endl;

    return 0;
}