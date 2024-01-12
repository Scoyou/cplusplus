#include <iostream>
#include <string>

int main() {
	std::string name {};
	int age {};

	std::cout << "Enter your name: ";
	std::getline(std::cin >> std::ws, name);
	
	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "Your name + age is: " << age + std::ssize(name);

	return 0;
}
