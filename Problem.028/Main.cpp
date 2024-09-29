//Задача 28: Преобразуване на секунди в часове, минути и секунди
#include <iostream>

using namespace std;

int main()
{
    int totalSeconds;

    cout << "Total seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Hours = " << hours << ", Minutes = " << minutes << ", Seconds = " << seconds << endl;

    return 0;
}