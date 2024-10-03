//Задача 44: Изчисляване на остатъка от парично плащане
#include <iostream>

int main() {
    double price, paidAmount;

    std::cout << "Въведете цена на продукта: ";
    std::cin >> price;

    std::cout << "Въведете платената сума: ";
    std::cin >> paidAmount;

    if (paidAmount < price) {
        std::cerr << "Грешка: Платената сума е по-малка от цената на продукта." << std::endl;
    } else {
        double change = paidAmount - price;
        std::cout << "Остатък: " << change << " лева" << std::endl;
    }

    return 0;
}
