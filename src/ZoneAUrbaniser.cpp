#include <iostream>

#include "ZoneUrbaine.h"
#include "parcelle.h"
#include "ZoneAUrbaniser.h"

ZAU::ZAU(int num, string prop, Polygone<int> forme): Z_Constructible(num, prop, forme) {}

float ZAU::surfaceConstructible()
{
    return Parcelle::surface;
}

