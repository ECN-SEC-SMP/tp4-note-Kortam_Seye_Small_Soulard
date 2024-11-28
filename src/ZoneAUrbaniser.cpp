#include "ZoneAUrbaniser.h"
#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"
using namespace std;

ZAU::ZAU(int num, std::string prop, Polygone<int> forme, float surface)
    : Z_Constructible(num, prop, forme), surface_constructible(surface) {
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
        std::cerr << "Surface constructible doit être entre 0 et 1." << std::endl;
    }
}

float ZAU::surfaceConstructible() {
    return Z_Constructible::surface * surface_constructible;
}

/*#include <iostream>

#include "ZoneUrbaine.h"
#include "parcelle.h"
#include "ZoneAUrbaniser.h"

ZAU::ZAU(int num, string prop, Polygone<int> forme): Z_Constructible(num, prop, forme) {}

float ZAU::surfaceConstructible()
{
    return Parcelle::surface;
}

*/