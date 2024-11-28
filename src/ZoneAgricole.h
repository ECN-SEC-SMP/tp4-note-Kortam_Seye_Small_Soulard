#ifndef ZA_H
#define ZA_H

#include <iostream>
#include "ZoneUrbaine.h"
#include "parcelle.h"
#include "ZoneConstructible.h"
#include "ZoneNaturelle.h"

using namespace std;

class ZA: virtual public ZN , virtual public ZoneConstructible
{
private:
    std::string type_culture; 
public:
    

    ZA(int num, std::string prop, Polygone<int> forme, std::string culture);


    //ZA();
    //ZA(int num, string prop, Polygone<int> forme, string culture);

    void setType(std::string type) override; // Redéfinition de setType
    //virtual float surfaceConstructible() override = 0;

    void set_type_culture(string culture ) ; 
    string get_type_culture () const; 
    float surfaceConstructible(); 

    friend ostream& operator<<(std::ostream& os, const ZA& za) {
    os << "Numero: " << za.getNumero() << "\n"
       << "Type: " << za.getType() << "\n"
       << "" << za.getForme() << "\n"
       << "Proprietaire: " << za.getProprietaire() << "\n"
       << "Culture: " << za.get_type_culture() << "\n"
       << "Surface: " << za.getSurface() << "\n";
       
    return os;
    }
    
};



#endif