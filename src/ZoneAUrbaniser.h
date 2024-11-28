/*#ifndef ZAU_H
#define ZAU_H

#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"

class ZAU : public ZoneConstructible {

public:

    ZAU(int num, string prop, Polygone<int> forme) ;

    float surfaceConstructible();

};



#endif*/


#ifndef ZAU_H
#define ZAU_H

#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"

using namespace std;
class ZAU : public ZoneConstructible {
private:
    float surface_constructible;

public:

    //Constructeur
    ZAU(int num, std::string prop, Polygone<int> forme, float surface) ;

    //Getter pour la surface xconstructible
    float getSurfaceConstructible() const;

    //Setter pour la surface constructible
    void setSurfaceConstructible(float surface);

    //Méthode pour obtenir la surface constructible
    float surfaceConstructible();

    //Surcharge de l'opérateur << pour affichage
    friend ostream& operator<<(std::ostream& os, const ZAU& zau) {
    os << "Numero: " << zau.getNumero() << "\n"
       << "Type: " << zau.getType() << "\n"
       << "" << zau.getForme() << "\n"
       << "Proprietaire: " << zau.getProprietaire() << "\n"
       << "Surface: " << zau.getSurface() << "\n"
       << "Constructible: " << zau.getSurfaceConstructible() * 100 << " %\n";
       
    return os;
    }
};

#endif 