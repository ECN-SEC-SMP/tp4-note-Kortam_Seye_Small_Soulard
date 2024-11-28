
/**
 * @file ZoneNaturelle.h
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Implémetation de la classe ZoneNaturelle avec ses fonctions.
 */
#ifndef ZN_H
#define ZN_H

#include <iostream>

#include "parcelle.h"



class ZN : virtual public Parcelle {
public:

    /** Constructeur de "ZN" */
    ZN(int num, string prop, Polygone<int> forme) : Parcelle(num, prop, forme) {
        setType("ZN");
    }

    /**
    *@brief setter pour mettre le type de parcelle à "ZN"
    */
    void setType(string type) override {
        this->type = type;
    }
};

#endif // ZN_H