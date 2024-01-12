#include <iostream>

int main() {
	char x {};
	std::cout << "Enter a character: ";

	std::cin >> x;

	std::cout << "You entered: " << x << '\n';

	std::cout << "Which has an ASCII value of: " << static_cast<int>(x) << std::endl;
	return 0;

}
