//Задача 52: Изчисляване на стойността на израз
#include <iostream>

int main()
{
    double firstNumber;
    double secondNumber;

    std::cout << "first number = ";
    std::cin >> firstNumber;
    std::cout << "second number = ";
    std::cin >> secondNumber;

    double result = (firstNumber + secondNumber) * (firstNumber - secondNumber);

    std::cout << result << std::endl;

    return 0;
}