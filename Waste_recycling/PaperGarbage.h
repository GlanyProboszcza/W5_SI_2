#pragma once
#include "Garbage.h"

class PaperGarbage : public Garbage {
public:
	PaperGarbage();
	bool isSqueezed;
	void squeeze();
};

