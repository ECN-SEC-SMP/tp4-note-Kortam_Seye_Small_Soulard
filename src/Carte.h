#ifndef CARTE_H
#define CARTE_H

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "parcelle.h"
#include "ZoneUrbaine.h"
#include "ZoneAgricole.h"
#include "ZoneNaturelle.h"
#include "ZoneAUrbaniser.h"

class Carte {
private:
    std::vector<Parcelle*> parcelles;  // Liste des parcelles
    float surfaceTotale;               // Surface totale de la carte

public:
    // Constructeurs
    Carte();
    Carte(const std::string& filename); // Constructeur qui charge la carte à partir d'un fichier

    // Méthodes
    void ajouterParcelle(Parcelle* parcelle);
    float calculerSurfaceTotale() const;
    void lireDepuisFichier(const std::string& filename);
    void sauvegarderDansFichier(const std::string& filename) const;
    void afficherCarte() const;

    // Destructeur
    ~Carte();
};

#endif // CARTE_H
