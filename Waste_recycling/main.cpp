#include <iostream>
# include "Dustbin.h"
#include "PaperGarbage.h"

int main() {
	Dustbin dustbin;
	PaperGarbage papier;

	try {
		dustbin.throwOutPaperGarbage(papier);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
	papier.squeeze();

	try {
		dustbin.throwOutPaperGarbage(papier);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
}
