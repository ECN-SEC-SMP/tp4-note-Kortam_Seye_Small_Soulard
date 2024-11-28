/**
 * @file ZoneConstructible.cpp
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Implémetation de la classe ZoneConstructible avec ses attributs et fonctions.
 */

#include <iostream>

#include "parcelle.h"
#include "ZoneConstructible.h"

using namespace std;

/** Constructeur par défaut de ZoneConstructible */
ZoneConstructible::ZoneConstructible() {
    this->surfaceConstruite = 0.0;
}

/**  Constructeur qui initialise une ZoneConstructible avec un numéro, un propriétaire et une forme*/
ZoneConstructible::ZoneConstructible(int num, string prop, Polygone<int> forme) : Parcelle(num, prop, forme) {}

/**  Constructeur qui initialise une ZoneConstructible avec un numéro, un propriétaire, une forme et une surfaceConstruite donnée */
ZoneConstructible::ZoneConstructible(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
    : Parcelle(num, prop, forme), surfaceConstruite(surfaceConstruite) {}

/**  
*@brief Getter pour obtenir la surface construite
*@return float la surface construite */

float ZoneConstructible::getSurfaceConstruite() {
    return surfaceConstruite;
}

/** 
*@brief Setter pour définir la surface construite 
*/
void ZoneConstructible::setSurfaceConstruite(float surface) {
    this->surfaceConstruite = surface;
}

/**  
*@brief Setter pour modifier le type de la zone constructible (urbaine, agricole, etc.)
 */
void ZoneConstructible::setType(string type) {
    this->type = type;
}
