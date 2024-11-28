/**
 * @file ZoneAgricole.h
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Création de la classe ZoneAgricole avec ses attributs et fonctions.
 */

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
    
    /** Constructeur */
    ZA(int num, std::string prop, Polygone<int> forme, std::string culture);

    /** Redéfinition de setType */
    void setType(std::string type) override; 
  
    /** Setter du type de culture */
    void set_type_culture(string culture ) ;

    /** Getter du type de culture */
    string get_type_culture () const;

    /** Méthode pour obtenir la surface constructible */
    float surfaceConstructible(); 

    /** Surcharge de l'opérateur << pour afficher la zone */
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