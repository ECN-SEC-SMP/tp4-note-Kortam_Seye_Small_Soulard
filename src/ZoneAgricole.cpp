

#include <iostream>

#include "parcelle.h"
#include "ZoneNaturelle.h"
#include "ZoneAgricole.h"


ZA::ZA(): ZN(0, "test", Polygone<int>()), type_culture(""){}
ZA::ZA(int num, string prop, Polygone<int> forme, string culture): ZN(num, prop, forme), type_culture(culture){}


void ZA::set_type_culture(string culture)  {
    this->type_culture = culture; 
}

string ZA::get_type_culture() const{
    return this->type_culture; 
} 

float ZA:: surfaceConstructible(){
    float surfaceConstructible =0; 
    if ((surfaceConstruite < (Z_Constructible::surface*0.1)) & (surfaceConstruite < 200)){
        surfaceConstructible= Z_Constructible::surface - surfaceConstruite ; 
        return surfaceConstructible;
    }   
    return surfaceConstructible; 
}

void ZA::setType(std::string type) {
    this->type = type;
}

