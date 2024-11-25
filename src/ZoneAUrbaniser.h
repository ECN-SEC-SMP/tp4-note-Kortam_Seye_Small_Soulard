#ifndef ZAU_H
#define ZAU_H

#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"



class ZAU : public Z_Constructible {

public:

    ZAU(int num, string prop, Polygone<int> forme) ;

    float surfaceConstructible();

};



#endif