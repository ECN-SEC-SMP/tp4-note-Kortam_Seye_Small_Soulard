#include "ZoneAUrbaniser.h"
#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"
using namespace std;

ZAU::ZAU(int num, std::string prop, Polygone<int> forme, float surface)
    : ZoneConstructible(num, prop, forme), surface_constructible(surface) {
    setType("ZAU"); // Set the type to "ZAU"
    setNumero(num);
    setProprietaire(prop);
    setForme(forme);
}

float ZAU::getSurfaceConstructible() const {
    return surface_constructible;
}

void ZAU::setSurfaceConstructible(float surface) {
    if (surface >= 0.0f && surface <= 1.0f) {
        surface_constructible = surface;
    } else {
        std::cerr << "Surface constructible doit Ãªtre entre 0 et 1." << std::endl;
    }
}

float ZAU::surfaceConstructible() {
    return ZoneConstructible::surface * surface_constructible;
}