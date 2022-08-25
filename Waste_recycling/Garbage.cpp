#include "Garbage.h"

std::string Garbage::getName() {

	std::string garbageName;
	std::cout << " Entern name of tha garbage :";
	std::getline(std::cin, garbageName);
	std::cout << std::endl;

	return garbageName;
}
