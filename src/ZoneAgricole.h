#ifndef ZA_H
#define ZA_H

#include <iostream>
#include "ZoneUrbaine.h"
#include "parcelle.h"
#include "ZoneConstructible.h"
#include "ZoneNaturelle.h"

using namespace std;

class ZA: virtual public ZN , virtual public Z_Constructible
{
private:
    std::string type_culture; 
public:
    ZA(int num, std::string prop, Polygone<int> forme, std::string culture)
        : Parcelle(num, prop, forme), ZN(num, prop, forme), Z_Constructible(num, prop, forme){
        setType("ZA");  // Initialise le type comme "ZA"
    }
    ZA();
    //ZA(int num, string prop, Polygone<int> forme, string culture);

    void setType(std::string type) override; // Redéfinition de setType
    //virtual float surfaceConstructible() override = 0;

    void set_type_culture(string culture ) ; 
    string get_type_culture () const; 
    float surfaceConstructible(); 
    
};

#endif