#pragma once
#include "Garbage.h"

class PaperGarbage : public Garbage {
public:
	bool isSqueezed;
	bool squeeze();
};

