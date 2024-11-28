#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"


using namespace std;
Z_Constructible::Z_Constructible(){
    this->surfaceConstruite = 0.0;
}
Z_Constructible::Z_Constructible(int num, string prop, Polygone<int> forme): Parcelle(num, prop, forme){}

Z_Constructible::Z_Constructible(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
    : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}

float Z_Constructible::getSurfaceConstruite()
{
    return surfaceConstruite; 
        
    }
 
void Z_Constructible::setSurfaceConstruite(float surface){
    this->surfaceConstruite= surface; 
}


/*void Parcelle::setType(string type){
    this ->type=type; 
}*/
    
void Z_Constructible::setType(string type) {
    this->type = type;
}