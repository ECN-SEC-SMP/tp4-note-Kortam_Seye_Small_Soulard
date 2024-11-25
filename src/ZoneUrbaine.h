#ifndef ZU_H
#define ZU_H

#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"



class ZU : public Z_Constructible {

public:

    ZU(int num, string prop, Polygone<int> forme, float surfaceConstruite);

    float surfaceConstructible();
    
};

#endif // ZU_H



