#ifndef ZN_H
#define ZN_H

#include <iostream>

#include "parcelle.h"


class ZN : public Parcelle {
public:
    ZN(int num, string prop, Polygone<int> forme) : Parcelle(num, prop, forme) {
        setType("ZN");
    }

    void setType(string type) override {
        this->type = type;
    }
};

#endif // ZN_H