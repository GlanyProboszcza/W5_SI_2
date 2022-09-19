#include "Dustbin9000.h"

void Dustbin9000::throwOutMetalGarbage(metalGarbage metal) {
	this ->metal.push_back(metal);
}

void Dustbin9000::throwOutBottleCapGarbage(BottleCap bottleCapGarbage) {
	if (bottleCapGarbage.get_color() == "pink") {
		bottleCaps.push_back(bottleCapGarbage);
	}
	else
		throw(DustbinContentError("Bottle cap is not pink"));
}