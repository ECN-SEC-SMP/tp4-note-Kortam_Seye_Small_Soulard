#ifndef ZA_H
#define ZA_H

#include <iostream>
#include "ZoneUrbaine.h"
#include "parcelle.h"
#include "ZoneConstructible.h"
#include "ZoneNaturelle.h"


class ZA: virtual public ZN , virtual public Z_Constructible
{
private:
    string type_culture; 
public:
    ZA();
    ZA(int num, string prop, Polygone<int> forme, string culture);

    void setType(std::string type) override; // Redéfinition de setType
    //virtual float surfaceConstructible() override = 0;

    void set_type_culture(string culture ) ; 
    string get_type_culture () const; 
    float surfaceConstructible(); 
    
};

#endif