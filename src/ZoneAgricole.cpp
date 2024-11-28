

#include <iostream>

#include "parcelle.h"
#include "ZoneNaturelle.h"
#include "ZoneAgricole.h"


ZA::ZA(int num, std::string prop, Polygone<int> forme, std::string culture)
    : Parcelle(num, prop, forme), ZN(num, prop, forme), Z_Constructible(num, prop, forme){
    setType("ZA");  // Initialise le type comme "ZA"
    set_type_culture(culture);
}


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

