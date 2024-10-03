//Задача 43: Проверка за кратност на 2, 3 и 5
#include <iostream>

int main() {
    int number;
    std::cout << "Въведете цяло число: ";
    std::cin >> number;

    bool isMultipleOf2 = (number % 2 == 0);
    bool isMultipleOf3 = (number % 3 == 0);
    bool isMultipleOf5 = (number % 5 == 0);

    if (isMultipleOf2) {
        std::cout << number << " е кратно на 2" << std::endl;
    }
    if (isMultipleOf3) {
        std::cout << number << " е кратно на 3" << std::endl;
    }
    if (isMultipleOf5) {
        std::cout << number << " е кратно на 5" << std::endl;
    }
    if (isMultipleOf2 && isMultipleOf3) {
        std::cout << number << " е кратно на 2 и 3" << std::endl;
    }
    if (isMultipleOf2 && isMultipleOf5) {
        std::cout << number << " е кратно на 2 и 5" << std::endl;
    }
    if (isMultipleOf3 && isMultipleOf5) {
        std::cout << number << " е кратно на 3 и 5" << std::endl;
    }
    if (isMultipleOf2 && isMultipleOf3 && isMultipleOf5) {
        std::cout << number << " е кратно на 2, 3 и 5" << std::endl;
    }
    if (!isMultipleOf2 && !isMultipleOf3 && !isMultipleOf5) {
        std::cout << number << " не е кратно на 2, 3 или 5" << std::endl;
    }

    return 0;
}
