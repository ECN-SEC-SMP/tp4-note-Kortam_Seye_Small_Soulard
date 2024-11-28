#include <iostream>
#include "parcelle.h"
#include "ZoneNaturelle.h"
#include "ZoneAgricole.h"

// Constructeur de la classe ZA
ZA::ZA(int num, std::string prop, Polygone<int> forme, std::string culture)
    : Parcelle(num, prop, forme), ZN(num, prop, forme), ZoneConstructible(num, prop, forme){
    setType("ZA");  // Initialise le type comme "ZA"
    set_type_culture(culture); // Initialise le type de culture pour cette parcelle agricole
}

// Setter pour le type de culture
void ZA::set_type_culture(string culture)  {
    this->type_culture = culture; 
}

// Getter pour le type de culture (retourne la culture associée à cette parcelle)
string ZA::get_type_culture() const{
    return this->type_culture; 
} 

// Calcul de la surface constructible dans une zone agricole
float ZA::surfaceConstructible(){
    float surfaceConstructible = 0; 
    if ((surfaceConstruite < (ZoneConstructible::surface * 0.1)) && (surfaceConstruite < 200)) {
        surfaceConstructible = ZoneConstructible::surface - surfaceConstruite; 
        return surfaceConstructible;
    }   
    return surfaceConstructible;
}

// Setter pour le type de la zone
void ZA::setType(std::string type) {
    this->type = type; 
}
