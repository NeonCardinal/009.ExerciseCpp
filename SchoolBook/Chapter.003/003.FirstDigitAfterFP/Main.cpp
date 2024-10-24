//Chapter Three, Task 003
//24.10.2024, 21:50
#include <iostream>
#include <math.h>

int main()
{
	int b;
	int i;
	double x;

	std::cout << "x > 0? ";
	std::cin >> x;

	i = floor(x * 10);
	b = i % 10;

	std::cout << b << std::endl;

	return 0;
}