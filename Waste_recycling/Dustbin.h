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
	std::vector <PaperGarbage> paperContent; // [PaperGarbage] ;
	std::vector <PlasticGarbage> plasticContent; // [PlasticGarbage] ;
	std::vector <Garbage> houseWasteContent; // [Garbage] ;
	
	std::exception DustbinContentError();
	void throwOutGarbage(Garbage);
	void throwOutPaperGarbage(PaperGarbage);
	void throwOutPlasticGarbage(PlasticGarbage);
	void emptyContents();

	std::string getColor();

};

