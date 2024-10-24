//Chapter Three, Task 001
//24.10.2024, 20:59
#include <iostream>

int main()
{
	double a;
	double b;
	double x;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	x = a;
	a = b;
	b = x;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}