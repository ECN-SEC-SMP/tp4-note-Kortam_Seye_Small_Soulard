#ifndef ZU_H
#define ZU_H

#include "parcelle.h"

class ZU : public Parcelle {
private:
    float surfaceConstruite;

public:
    ZU(int num, string prop, Polygone<int> forme, float surfaceConstruite);

    float getSurfaceConstruite() const;
    void setSurfaceConstruite(float surface);

    float surfaceConstructible() const;

    void setType(string type) override;
};

#endif // ZU_H



/*
code moi ZU.h sachant que 
— Les ZU ont comme caractéristique supplémentaire par rapport à une ZAU d’avoir déjà
une surface (en m2) construite. Pour les ZU et ZAU vous écrirez une méthode surfaceConstructible
permettant de calculer la surface constructible qui donnera la surface constructible
totale pour une ZAU et la surface constructible restante pour une ZU.

ZU hérite de parcelle.h

*/