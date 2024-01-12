#include <iostream>

double distanceFallen(int seconds, double gravity) {
	return gravity * (seconds * seconds) / 2;
}

int main() {
	double towerHeight {};
	double const gravity { 9.8 };
	std::cout << "Enter the height of a tower: ";
	
	std::cin >> towerHeight;

	int seconds {0};
	double currentHeight {towerHeight - distanceFallen(seconds, gravity)};

	while (currentHeight > 0) {
		if (currentHeight <= 0 ){
			std::cout << "At " << seconds << " seconds, the ball is on the ground";
		} else {
		std::cout << "At " << seconds 
			<< " seconds, the ball is at height: " << currentHeight << '\n';
		}

		++seconds;
		currentHeight = towerHeight - distanceFallen(seconds, gravity);
	}

	return 0;
}
