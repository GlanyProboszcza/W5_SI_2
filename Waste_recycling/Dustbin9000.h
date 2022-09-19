#pragma once
#include "Dustbin.h"
#include <iostream>
#include <string>
#include <vector>

class metalGarbage : public Garbage {
};

class BottleCap : public Garbage {
public:
	std::string color;
	std::string get_color() { return color; }

};

class Dustbin9000 : public Dustbin {
public:
	std::vector<metalGarbage> metal;
	std::vector<BottleCap> bottleCaps;
	void throwOutMetalGarbage(metalGarbage metal);
	void throwOutBottleCapGarbage(BottleCap bottleCapGarbage);

};