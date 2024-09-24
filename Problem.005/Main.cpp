//Задача 5: Конвертор на валута
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double leva;
    double euro;
    double kurs;

    cout << "leva = ";
    cin >> leva;
    cout << "kurs = ";
    cin >> kurs;

    euro = leva / kurs;

    cout << setprecision(2) << setiosflags(ios::fixed) << euro << endl;

    return 0;
}