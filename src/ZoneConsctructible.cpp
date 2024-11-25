
#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"


using namespace std; 

    Z_Constructible:: Z_Constructible(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
        : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}
    
    
    float getSurfaceConstruite() {        
        return surfaceConstruite ; 
        
    }
 
    void setSurfaceConstruite(float surface){
        
    }

    float surfaceConstructible() {
        
    }

    void setType(string type) {
        
    }
    
    string type_culture() {}
    