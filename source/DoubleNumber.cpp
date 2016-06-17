#include <iostream>

int doubleNumber(int num) {
	int ans = num * 2;
	return ans;
}

int main() {
	std::cout << "Type a number: ";
	int x = 0;
	std::cin >> x;
	std::cout << "Doubled Number: ";
	std::cout << doubleNumber(x) << std::endl;
	return 0;
}