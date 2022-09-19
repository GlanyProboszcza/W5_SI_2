#include "PaperGarbage.h"

PaperGarbage::PaperGarbage() {
    this ->name = "papier";
    isSqueezed = 0;
}

void PaperGarbage::squeeze() {
    isSqueezed = true;
}
