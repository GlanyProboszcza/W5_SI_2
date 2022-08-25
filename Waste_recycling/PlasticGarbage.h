#pragma once
#include "Garbage.h"

class PlasticGarbage : public Garbage {
public:
	bool isClean;
	bool clean();
};

