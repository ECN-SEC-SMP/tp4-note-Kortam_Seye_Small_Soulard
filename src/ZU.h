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


