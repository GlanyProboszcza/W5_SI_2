#pragma once
#include "Garbage.h"

class PlasticGarbage : public Garbage {
public:
	bool isClean;
	void clean();
};

