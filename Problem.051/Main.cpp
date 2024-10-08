//Задача 51: Преобразуване на брой секунди в дни, часове, минути и секунди
#include <iostream>

int main()
{
    int totalSeconds;
    
    std::cout << "Въведете общия брой секунди: ";
    std::cin >> totalSeconds;
    
    int days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    
    std::cout << "Дни: " << days << "\n"
              << "Часове: " << hours << "\n"
              << "Минути: " << minutes << "\n"
              << "Секунди: " << seconds << std::endl;
    
    return 0;
}