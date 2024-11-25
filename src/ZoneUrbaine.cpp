#include "ZoneUrbaine.h"
#include "parcelle.h"

/*
ça déconne psq on a pas crée la classe virtuelle constructible 
*/
/*
ZU::ZU(int num, string prop, Polygone<int> forme, float surfaceConstruite)
    : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}

float ZU::getSurfaceConstruite() const {
    return surfaceConstruite;
}

void ZU::setSurfaceConstruite(float surface) {
    surfaceConstruite = surface;
}

float ZU::surfaceConstructible() const {
    return Parcelle::surface() - surfaceConstruite;
}

void ZU::setType(string type) {
    // Assuming Parcelle has a setType method
    Parcelle::setType(type);
}*/