#include "Dustbin.h"

std::string Dustbin::getColor() {
	std::string customColor;
	std::cout << "Enter color of your dustbin: ";
	std::getline(std::cin, customColor);
	std::cout << std::endl;
	
	return customColor;
}
