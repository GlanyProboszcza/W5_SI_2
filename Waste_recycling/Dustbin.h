#pragma once
#include <string>
#include <vector>
#include<iostream>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

class Dustbin {
public:
	std::string color;
	std::vector <std::string> paperContent; // [PaperGarbage] ;
	std::vector <std::string> plasticContent; // [PlasticGarbage] ;
	std::vector <std::string> houseWasteContent; // [Garbage] ;
	
	std::exception DustbinContentError();
	void throwOutGarbage(Garbage);
	void throwOutPaperGarbage(PaperGarbage);
	void throwOutPlasticGarbage(PlasticGarbage);
	void emptyContents();

	std::string getColor();

};

