//Задача 53: Преобразуване на брой минути в часове и минути
#include <iostream>

int main()
{
    int minutes;

    std::cout << "minutes" << std::endl;
    std::cin >> minutes;

    int hours = minutes / 60;
    int restminutes = minutes % 60;

    std::cout << hours << ", " << restminutes << std::endl;

    return 0;
}