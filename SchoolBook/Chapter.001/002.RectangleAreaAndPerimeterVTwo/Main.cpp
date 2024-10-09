//Chapter 1, Task 2
//08.10.2024, 22:23
#include <iostream>

int main()
{
    double a;
    double b;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    double p = 2 * (a + b);
    double s = a * b;

    std::cout << "Периметъра на правоъгълника е: " << p << std::endl;
    std::cout << "Лицето на правоъгълника е: " << s << std::endl;

    return 0;
}