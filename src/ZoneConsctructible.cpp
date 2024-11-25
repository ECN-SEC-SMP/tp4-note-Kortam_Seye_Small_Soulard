
#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"


using namespace std; 

    Z_Constructible:: Z_Constructible(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
        : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}
    
    
    float Z_Constructible::getSurfaceConstruite() {        
        return surfaceConstruite ; 
        
    }
 
    void Z_Constructible::setSurfaceConstruite(float surface){
        this->surfaceConstruite= surface; 
    }

    float Z_Constructible::surfaceConstructible() {}
    
    void Z_Constructible::set_type_culture(string culture)  {
        this->type_culture = culture; 
        
    }
    
    string Z_Constructible::get_type_culture() const{
        return type_culture; 
    } 


    