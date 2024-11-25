#ifndef ZC_H
#define ZC_H

#include "parcelle.h"

class Z_Constructible : public Parcelle {
    
protected:

    float surfaceConstruite;
    

public:
    Z_Constructible(int num, string prop, Polygone<int> forme);

    Z_Constructible(int num, string prop, Polygone<int> forme, float surfaceConstruite);
    
    string gettype() const; // le type de zone, à voir s'il il faut le redefinir 

    float getSurfaceConstruite() ;
    
    void setSurfaceConstruite(float surface);

    virtual float surfaceConstructible()=0;
    

    
     
};

#endif // ZC_H
