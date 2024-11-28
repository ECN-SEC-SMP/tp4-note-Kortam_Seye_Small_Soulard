#ifndef ZC_H
#define ZC_H

#include "parcelle.h"

class ZoneConstructible : virtual public Parcelle {
    
protected:

    //Variable réel pour la surface construite
    float surfaceConstruite;
    

public:

    //Constructeurs
    ZoneConstructible();
    ZoneConstructible(int num, string prop, Polygone<int> forme);
    ZoneConstructible(int num, string prop, Polygone<int> forme, float surfaceConstruite);

    //le type de zone
    std::string gettype() const;

    //Getter pour la surface construite
    float getSurfaceConstruite() ;

    //Setter pour la surface construite
    void setSurfaceConstruite(float surface);

    //Méthode virtuelle purte pour calculer la surface constructible restante
    virtual float surfaceConstructible()=0;

    //Setter pour le type de zone
    void setType(string type);
    
     
};

#endif // ZC_H
