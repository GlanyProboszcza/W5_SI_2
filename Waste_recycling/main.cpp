# include <iostream>
# include "Dustbin.h"
# include "PaperGarbage.h"
# include "PlasticGarbage.h" 
# include "Dustbin9000.h"

//UNIT TESTY
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
	

	PlasticGarbage plastik;

	try {
		dustbin.throwOutPlasticGarbage(plastik);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
	plastik.clean();

	try {
		dustbin.throwOutPlasticGarbage(plastik);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}

	BottleCap bottleCap1;
	Dustbin9000 dustbin9000;
	bottleCap1.color = "blue";
	try {
		dustbin9000.throwOutBottleCapGarbage(bottleCap1);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}

	bottleCap1.color = "pink";

	try {
		dustbin9000.throwOutBottleCapGarbage(bottleCap1);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}

	//################
	PaperGarbage papier2;
	try {
		dustbin9000.throwOutPaperGarbage(papier2);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
	papier2.squeeze();

	try {
		dustbin9000.throwOutPaperGarbage(papier2);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}

	PlasticGarbage plastik2;

	try {
		dustbin9000.throwOutPlasticGarbage(plastik2);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
	plastik2.clean();

	try {
		dustbin9000.throwOutPlasticGarbage(plastik2);
	}
	catch (DustbinContentError& error) {
		std::cout << "\n [!] " << error.getMessage();
	}
}
