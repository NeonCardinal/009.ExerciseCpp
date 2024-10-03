//Задача 45: Преобразуване на сантиметри в инчове
#include <iostream>

int main()
{
    double centimeters;

    std::cout << "centimeters = ";
    std::cin >> centimeters;

    double inches = centimeters / 2.54;

    std::cout << centimeters << "cm е равно на: " << inches << " инча." << std::endl;

    return 0;
}