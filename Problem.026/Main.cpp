#include <iostream>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

int dateToDays(Date date)
{
    return date.year * 365 + date.month * 30 + date.year;
}

int calcDiff(Date firstDate, Date secondDate)
{
    int firstDays = dateToDays(firstDate);
    int secondDays = dateToDays(secondDate);

    return abs(firstDays - secondDays);
}

int main()
{
    Date dateOne;
    Date dateTwo;

    cout << "First date = (day, month, year) ";
    cin >> dateOne.day >> dateOne.month >> dateOne.year;
    cout << "Second date = (day, month, year) ";
    cin >> dateTwo.day >> dateTwo.month >> dateTwo.year;

    int diff = calcDiff(dateOne, dateTwo);

    cout << "Diff = " << diff << endl;

    return 0;
}