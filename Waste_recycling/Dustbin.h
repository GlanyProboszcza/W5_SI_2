#pragma once
#include <string>
#include<iostream>

class Dustbin {
public:
	std::string Color;
	std::string paperContent[10];
	std::string plasticContent[10];
	std::string houseWasteContent[10];


	std::string getColor();

};

