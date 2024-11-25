

#include <iostream>

#include "parcelle.h"
#include "ZoneNaturelle.h"
#include "ZoneAgricole.h"





//ZA::ZA(int num, string prop, Polygone<int> forme, string culture): ZN(num, prop, forme), type_culture(culture){}


void ZA::set_type_culture(string culture)  {
    this->type_culture = culture; 
}

string ZA::get_type_culture() const{
    return type_culture; 
} 

float ZA:: surfaceConstructible(){
    
}