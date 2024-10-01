//Задача 33: Конвертиране на брой дни в години, месеци и дни
#include <iostream>

using namespace std;

int main()
{
    int days;

    cout << "days = ";
    cin >> days;

    int years = days / 365;
    int rdays = days % 365;
    int months = rdays / 30;
    int remdays = rdays % 30;

    cout << "years: " << years << ", months: " << months << ", days: " << days << endl;

    return 0;
}