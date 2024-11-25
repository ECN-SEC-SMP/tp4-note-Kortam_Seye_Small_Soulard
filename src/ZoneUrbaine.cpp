#include <iostream>

#include "ZoneUrbaine.h"
#include "parcelle.h"


ZU::ZU(int num, string prop, Polygone<int> forme, float surfaceConstruite)
    : Z_Constructible(num, prop, forme, surfaceConstruite) {} // particularité d'avoir une surface déjà construite 

float ZU::surfaceConstructible() {
    
    float surface_restante = Parcelle::surface - surfaceConstruite; // a definir la surface
  
}

