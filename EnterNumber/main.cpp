#include <iostream>

int main(){
	std::cout << "Enter a number: ";
	int x{};
	int y{};
	std::cin >> x >> y;

	std::cout << "You entered " << x << " and " << y << '\n';
	return 0;
}
