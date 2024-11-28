#ifndef ZONEURBAINE_H
#define ZONEURBAINE_H

#include "ZoneConstructible.h"

class ZoneUrbaine : public ZoneConstructible {
private:
    float surfaceRestante;  // Surface encore constructible

public:
    ZoneUrbaine();  // Constructeur par défaut
    ZoneUrbaine(int num, std::string prop, Polygone<int> forme, float surfaceConstruite);
    ZoneUrbaine(int num, std::string prop, Polygone<int> forme, float surfaceConstruite, float surfaceRestante);

    // Redéfinition de la méthode pour calculer la surface constructible restante
    float surfaceConstructible() override;

    // Surcharge de la méthode pour afficher les informations
    void afficher() const;

    // Getter et Setter
    float getSurfaceRestante() const;
    void setSurfaceRestante(float surface);
    virtual float getSurfaceConstruite() const;
};

#endif // ZONEURBAINE_H