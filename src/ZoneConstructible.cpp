#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"


using namespace std;
ZoneConstructible::ZoneConstructible(){
    this->surfaceConstruite = 0.0;
}
ZoneConstructible::ZoneConstructible(int num, string prop, Polygone<int> forme): Parcelle(num, prop, forme){}

ZoneConstructible::ZoneConstructible(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
    : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}

float ZoneConstructible::getSurfaceConstruite()
{
    return surfaceConstruite; 
        
    }
 
void ZoneConstructible::setSurfaceConstruite(float surface){
    this->surfaceConstruite= surface; 
}


/*void Parcelle::setType(string type){
    this ->type=type; 
}*/
    
void ZoneConstructible::setType(string type) {
    this->type = type;
}