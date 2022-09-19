#include "PlasticGarbage.h"

void PlasticGarbage::clean() {
	isClean = true;
}

PlasticGarbage::PlasticGarbage() {
	this->name = "plastic";
	isClean = 0;
}