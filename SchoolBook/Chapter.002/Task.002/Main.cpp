//Chapter Two, Task 002
//24.10.2024, 20:42
#include <iostream>
#include <iomanip>

int main()
{
	double a = 209.5;
	double b = 63.75658;

	std::cout << std::setprecision(5) << std::setiosflags(std::ios::fixed);
	std::cout << std::setw(10) << a << std::endl;
	std::cout << std::setw(10) << b << std::endl;
	std::cout << std::resetiosflags(std::ios::fixed);
	std::cout << std::setw(20) << a << std::endl;
	std::cout << std::setw(20) << b << std::endl;

	return 0;
}