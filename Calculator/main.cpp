#include <iostream>
#include <map>
#include <string>

double addNum(double firstNum, double secondNum) {
	return firstNum + secondNum;
}
double subtractNum(double firstNum, double secondNum) {
	return firstNum - secondNum;
}
double divideNum(double firstNum, double secondNum) {
	if(secondNum == 0) {
		std::cerr << "Error: 0 division \n";
		return 0;
	}
	return firstNum / secondNum;
}
double multiplyNum(double firstNum, double secondNum) {
	return firstNum * secondNum;
}
int main() {
	std::map<std::string, double> operandMap;
	
	double firstNum {};
	double secondNum {};
	std::string operand {};

	std::cout << "First number: ";
	std::cin >> firstNum;

	std::cout << "Second number: ";
	std::cin >> secondNum;
	
	std::cout << "Operand: ";
	std::cin >> operand;

	operandMap["+"] = addNum(firstNum, secondNum);
	operandMap["-"] = subtractNum(firstNum, secondNum);
	operandMap["/"] = divideNum(firstNum, secondNum);
	operandMap["*"] = multiplyNum(firstNum, secondNum);

	std::cout << firstNum << ' ' << operand << ' ' << secondNum << " = ";

	std::cout << operandMap[operand] << '\n';
	return 0;
}
