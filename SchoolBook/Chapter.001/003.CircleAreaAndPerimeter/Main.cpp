//Chapter 1, Task 3
//08.10.2024, 22:31
#include <iostream>

const double PI = 3.14159265;

int main()
{
    double r;

    std::cout << "r = ";
    std::cin >> r;

    double p = 2 * PI * r;
    double s = PI * r * r;

    std::cout << "Дължината на окръжността е: " << p << std::endl;
    std::cout << "Лицето на окръжността е: " << s << std::endl;

    return 0;
}