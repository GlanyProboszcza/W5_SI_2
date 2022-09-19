#pragma once
#include <string>
#include <vector>
#include<iostream>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "DustbinContentError.h"

class Dustbin {
public:
	std::string color;
	std::vector <PaperGarbage> paperContent; // [PaperGarbage] ;
	std::vector <PlasticGarbage> plasticContent; // [PlasticGarbage] ;
	std::vector <Garbage> houseWasteContent; // [Garbage] ;
	
	void throwOutGarbage(Garbage garbage);
	void throwOutPaperGarbage(PaperGarbage paperGarbage);
	void throwOutPlasticGarbage(PlasticGarbage plasticGarbage);
	void emptyContents();

	std::string getColor();

};
