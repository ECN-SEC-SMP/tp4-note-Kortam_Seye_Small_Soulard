
/**
 * @file ZoneConstructible.h
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Création de la classe ZoneConstructible avec ses attributs et fonctions.
 */
 
#ifndef ZC_H
#define ZC_H

#include "parcelle.h"

class ZoneConstructible : virtual public Parcelle {
    
protected:

    /** Variable réel pour la surface construite */
    float surfaceConstruite;
    

public:

    /** Constructeurs */
    ZoneConstructible();
    ZoneConstructible(int num, string prop, Polygone<int> forme);
    ZoneConstructible(int num, string prop, Polygone<int> forme, float surfaceConstruite);

    /** le type de zone */
    std::string gettype() const;

    /** Getter pour la surface construite */
    float getSurfaceConstruite() ;

    /** Setter pour la surface construite */
    void setSurfaceConstruite(float surface);

    /** Méthode virtuelle purte pour calculer la surface constructible restante */
    virtual float surfaceConstructible()=0;

    /** Setter pour le type de zone */
    void setType(string type);
    
     
};

#endif // ZC_H
