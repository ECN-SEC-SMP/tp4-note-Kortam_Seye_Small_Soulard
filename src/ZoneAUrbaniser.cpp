#include "ZoneAUrbaniser.h"
#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"
using namespace std;

//Constructeur
ZAU::ZAU(int num, std::string prop, Polygone<int> forme, float surface)
    : ZoneConstructible(num, prop, forme), surface_constructible(surface) {
    setType("ZAU"); // Set du type à "ZAU"
    setNumero(num);
    setProprietaire(prop);
    setForme(forme);
}

//Getter de la surface constructible
float ZAU::getSurfaceConstructible() const {
    return surface_constructible;
}

//Setter de la surface constructible
void ZAU::setSurfaceConstructible(float surface) {
    if (surface >= 0.0f && surface <= 1.0f) {
        surface_constructible = surface;
    } else {
        std::cerr << "Surface constructible doit être entre 0 et 1." << std::endl;
    }
}

//Méthode pour obtenir la surface constructible
float ZAU::surfaceConstructible() {
    return ZoneConstructible::surface * surface_constructible;
}
