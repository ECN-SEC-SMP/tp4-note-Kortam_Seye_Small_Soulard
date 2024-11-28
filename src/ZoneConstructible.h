#ifndef ZC_H
#define ZC_H

#include "parcelle.h"

class ZoneConstructible : virtual public Parcelle {
    
protected:

    float surfaceConstruite;
    

public:
    ZoneConstructible();
    ZoneConstructible(int num, string prop, Polygone<int> forme);
    ZoneConstructible(int num, string prop, Polygone<int> forme, float surfaceConstruite);
    
    std::string gettype() const; // le type de zone, à voir s'il il faut le redefinir 
    float getSurfaceConstruite() ;
    void setSurfaceConstruite(float surface);
    virtual float surfaceConstructible()=0;
    void setType(string type);
    
     
};

#endif // ZC_H
