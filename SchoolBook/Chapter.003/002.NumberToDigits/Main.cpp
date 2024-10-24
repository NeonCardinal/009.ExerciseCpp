//Chapter Three, Task 002
//24.10.2024, 21:34
#include <iostream>

int main()
{
	int number;

	std::cout << "three digit positive number: ";
	std::cin >> number;
	
	short stotici;
	short desetici;
	short edinici;

	stotici = number / 100;
	desetici = number / 10 % 10;
	edinici = number % 10;

	std::cout << stotici << ", " << desetici << ", " << edinici << std::endl;

	return 0;
}