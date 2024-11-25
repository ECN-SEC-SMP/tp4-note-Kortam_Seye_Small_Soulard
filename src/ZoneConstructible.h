#ifndef ZC_H
#define ZC_H

#include "parcelle.h"

class Z_Constructible : public Parcelle {
    
protected:

    float surfaceConstruite;
    string type_culture;
    

public:
    Z_Constructible(int num, string prop, Polygone<int> forme, float surfaceConstruite);
    
    string gettype() const; // le type de zone, à voir s'il il faut le redefinir 

    float getSurfaceConstruite() ;
    
    void setSurfaceConstruite(float surface);

    virtual float surfaceConstructible()=0;
    
    void set_type_culture(string culture ) ; 
    
    string get_type_culture () const; 
    
     
};

#endif // ZC_H
