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


// Méthode pour afficher les informations de la Zone Urbaine
void ZoneUrbaine::afficher() const {
    std::cout << "Zone Urbaine :\n";
    std::cout << "Numero : " << getNumero() << "\n";
    std::cout << "Proprietaire : " << getProprietaire() << "\n";
    std::cout << "Surface : " << getSurface() << " m2\n";
    std::cout << "Surface construite : " << getSurfaceConstruite() << " m2\n";
    std::cout << "Surface constructible restante : " << surfaceRestante << " m2\n";
}

// Getter pour la surface restante
float ZoneUrbaine::getSurfaceRestante() const {
    return surfaceRestante;
}

// Setter pour la surface restante
void ZoneUrbaine::setSurfaceRestante(float surface) {
    surfaceRestante = surface;
}

float ZoneUrbaine::getSurfaceConstruite() const {  // Ajoutez const ici également
    return surfaceConstruite;
}