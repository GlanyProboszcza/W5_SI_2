#include "Dustbin.h"

void Dustbin::throwOutGarbage(Garbage garbage) {
	houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage paperGarbage) {
	if (paperGarbage.isSqueezed) {
		paperContent.push_back(paperGarbage);
	}
	else
		throw(DustbinContentError("Paper not squeezed"));
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage plasticGarbage) {
	if (plasticGarbage.isClean) {
		plasticContent.push_back(plasticGarbage);
	}
	else
		throw(DustbinContentError("Plastic not clean"));
}

void Dustbin::emptyContents() {
	paperContent.clear();
	plasticContent.clear();
	houseWasteContent.clear();
}

std::string Dustbin::getColor() {
	std::string customColor;
	std::cout << "Enter color of your dustbin: ";
	std::getline(std::cin, customColor);
	std::cout << std::endl;
	
	return customColor;
}
