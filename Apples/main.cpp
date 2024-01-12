#include <iostream>

// Write the function getQuantityPhrase() here
// since the string doesn't change, we can use a string_view
constexpr std::string_view getQuantityPhrase(int appleCount) {
	std::string quantityPhrase {};
	if(appleCount < 0 ){
		quantityPhrase = "negative";
	} else if(appleCount == 0) {
		quantityPhrase = "no";
	} else if(appleCount == 1) {
		quantityPhrase = "a single";
	} else if(appleCount == 2) {
		quantityPhrase = "a couple of";
	} else if(appleCount == 3) {
		quantityPhrase = "a few";
	} else {
		quantityPhrase = "many";
	}

	return quantityPhrase;
}

// Write the function getApplesPluralized() here
// since the string isn't modified, we can use a string_view
constexpr std::string_view getApplesPluralized(int appleCount){
	return (appleCount == 1) ? "apple" : "apples";
}

int main()
{
    std::cout << "Mary has " << getQuantityPhrase(3) << ' ' << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
