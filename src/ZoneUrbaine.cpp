#include "ZoneUrbaine.h"
#include <iostream>

// Constructeur par défaut
ZoneUrbaine::ZoneUrbaine() : ZoneConstructible(), surfaceRestante(0.0) {}

// Constructeur avec la surface construite
ZoneUrbaine::ZoneUrbaine(int num, std::string prop, Polygone<int> forme, float surfaceConstruite)
    : ZoneConstructible(num, prop, forme, surfaceConstruite) {
    surfaceRestante = getSurface() - surfaceConstruite; // Calcul de la surface restante
    setType("ZU");
    setNumero(num);
    setProprietaire(prop);
    setForme(forme);

}

// Constructeur avec la surface construite et la surface restante spécifiées
ZoneUrbaine::ZoneUrbaine(int num, std::string prop, Polygone<int> forme, float surfaceConstruite, float surfaceRestante)
    : ZoneConstructible(num, prop, forme, surfaceConstruite), surfaceRestante(surfaceRestante) {
    surfaceRestante = getSurface() - surfaceConstruite; // Calcul de la surface restante
    setType("ZU");
    setNumero(num);
    setProprietaire(prop);
    setForme(forme);

}

// Méthode pour obtenir la surface constructible restante
float ZoneUrbaine::surfaceConstructible() {
    return surfaceRestante;  // Retourne la surface restante
}


// Getter pour la surface restante
float ZoneUrbaine::getSurfaceRestante() const {
    return surfaceRestante;
}

// Setter pour la surface restante
void ZoneUrbaine::setSurfaceRestante(float surface) {
    surfaceRestante = surface;
}

//Getter pour la surface construite
float ZoneUrbaine::getSurfaceConstruite() const {  // Ajoutez const ici également
    return surfaceConstruite;
}