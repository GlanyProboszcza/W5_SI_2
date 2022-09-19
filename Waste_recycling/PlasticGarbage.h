#pragma once
#include "Garbage.h"

class PlasticGarbage : public Garbage {
public:
	PlasticGarbage();
	bool isClean;
	void clean();
};