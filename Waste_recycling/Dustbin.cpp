#include "Dustbin.h"

std::exception Dustbin::DustbinContentError() {
	// ??? nie mam pojecia
	return ;
}

void Dustbin::throwOutGarbage(Garbage) {
	houseWasteContent.push_back(Garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage) {
	if (PaperGarbage::isSqueezed == true) {
		paperContent.push_back(Garbage);
	}
	else
		DustbinContentError();
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage) {
	if (PlasticGarbage::isClean == true) {
		plasticContent.push_back(Garbage);
	}
	else
		DustbinContentError();
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
