/*#ifndef ZAU_H
#define ZAU_H

#include <iostream>
#include "parcelle.h"
#include "ZoneConstructible.h"

class ZAU : public Z_Constructible {

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
class ZAU : public Z_Constructible {
private:
    float surface_constructible;

public:
    ZAU(int num, std::string prop, Polygone<int> forme, float surface) ;
    float getSurfaceConstructible() const;
    void setSurfaceConstructible(float surface);
    float surfaceConstructible();
    friend ostream& operator<<(std::ostream& os, const ZAU& zau) {
    os << "Numero: " << zau.getNumero() << "\n"
       << "Type: " << zau.getType() << "\n"
       << "" << zau.getForme() << "\n"
       << "Proprietaire: " << zau.getProprietaire() << "\n"
       << "Surface: " << zau.getSurface() << "\n"
       << "Constructible: " << zau.getSurfaceConstructible() * 100 << " %\n";
       //<< "Constructible: " << zau.getSurfaceConstructible() << "\n";
       
    return os;
    }
};

#endif 