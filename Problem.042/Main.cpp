//Задача 42: Обръщане на десетична дроб
#include <iostream>
#include <cmath>

int main() {
    int number;
    std::cout << "Въведете цяло число: ";
    std::cin >> number;

    double reversedNumber = 0;
    int digitCount = 0;
    int temp = number;

    // Преброяване на цифрите в числото
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    // Обръщане на числото и преобразуване в дробно число
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        reversedNumber += digit * pow(10, -digitCount);
        digitCount--;
        temp /= 10;
    }

    std::cout << "Обратната стойност е: " << reversedNumber << std::endl;

    return 0;
}
