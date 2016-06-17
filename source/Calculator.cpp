#include <iostream>
#include "colormod.h"

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {
	int oper;
	int factor1;
	int factor2;
	Color::Modifier red(Color::FG_RED);
	Color::Modifier green(Color::FG_GREEN);
	Color::Modifier blue(Color::FG_BLUE);
	Color::Modifier def(Color::FG_DEFAULT);
	Color::Modifier bred(Color::BG_RED);
	Color::Modifier bgreen(Color::BG_GREEN);
	Color::Modifier bblue(Color::BG_BLUE);
	Color::Modifier bdef(Color::BG_DEFAULT);
	std::cout << def << "Enter the operation number." << std::endl;
	std::cout << red << "1 is addition." << std::endl;
	std::cout << green << "2 is subtraction." << std::endl;
	std::cout << blue << "3 is mulitplication." << std::endl;
	std::cout << def << "4 is division." << std::endl;
	std::cout << red << "Operation Number: ";
	std::cin >> oper;
	std::cout << blue << "First Factor: ";
	std::cin >> factor1;
	std::cout << green << "Second Factor: ";
	std::cin >> factor2;
	std::cout << "Answer: ";
	switch (oper) {
		case 1:
			std::cout << blue << add(factor1, factor2) << def << std::endl;
			break;
		case 2:
			std::cout << blue << subtract(factor1, factor2) << def << std::endl;
			break;
		case 3:
			std::cout << blue << multiply(factor1, factor2) << def << std::endl;
			break;
		case 4:
			std::cout << blue << divide(factor1, factor2) << def << std::endl;
			break;
		default:
			std::cout << red << "Please enter a valid " <<
"operation number." << def << std::endl;
	}
	std::cout << def;
	return 0;
}