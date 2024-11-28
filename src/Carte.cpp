#include "Carte.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

// Constructeur par défaut
Carte::Carte() : surfaceTotale(0.0f) {}

// Constructeur qui charge les parcelles depuis un fichier
Carte::Carte(const std::string& filename) : surfaceTotale(0.0f) {
    lireDepuisFichier(filename);
}

// Méthode pour ajouter une parcelle à la carte
void Carte::ajouterParcelle(Parcelle* parcelle) {
    parcelles.push_back(parcelle);
    surfaceTotale += parcelle->getSurface();
}

// Calcul de la surface totale de la carte
float Carte::calculerSurfaceTotale() const {
    return surfaceTotale;
}

// Lecture des parcelles depuis un fichier
void Carte::lireDepuisFichier(const std::string& filename) {
    std::ifstream fichier(filename);
    if (!fichier.is_open()) {
        throw std::runtime_error("Erreur lors de l'ouverture du fichier: " + filename);
    }

    std::string ligne;
    while (std::getline(fichier, ligne)) {
        std::istringstream iss(ligne);
        std::string typeParcelle, proprietaire;
        int numero;
        iss >> typeParcelle >> numero >> proprietaire;

        // Lecture des points formant la parcelle
        std::getline(fichier, ligne);  // Lire la ligne des points
        std::istringstream pointsStream(ligne);
        std::vector<Point2D<int>> points;
        int x, y;
        while (pointsStream >> x >> y) {
            points.push_back(Point2D<int>(x, y));
        }

        Polygone<int> forme(points); // Créer la forme du polygone

        // Déterminer le type de la parcelle et la créer
        Parcelle* parcelle = nullptr;
        if (typeParcelle == "ZA") {
            std::string typeCulture;
            fichier >> typeCulture;
            parcelle = new ZA(numero, proprietaire, forme, typeCulture);
        } else if (typeParcelle == "ZAU") {
            int pConstructible;
            fichier >> pConstructible;
            parcelle = new ZAU(numero, proprietaire, forme, pConstructible);
        } else if (typeParcelle == "ZU") {
            int pConstructible;
            float surfaceConstruite;
            fichier >> pConstructible >> surfaceConstruite;
            parcelle = new ZoneUrbaine(numero, proprietaire, forme, pConstructible, surfaceConstruite);
        } else if (typeParcelle == "ZN") {
            parcelle = new ZN(numero, proprietaire, forme);
        }

        if (parcelle) {
            ajouterParcelle(parcelle);
        }
    }

    fichier.close();
}

// Sauvegarde la carte dans un fichier
void Carte::sauvegarderDansFichier(const std::string& filename) const {
    std::ofstream fichier(filename);
    if (!fichier) {
        throw std::runtime_error("Erreur lors de l'ouverture du fichier pour la sauvegarde");
    }

    for (const auto& parcelle : parcelles) {
        fichier << parcelle->getType() << " " << parcelle->getNumero() << " " << parcelle->getProprietaire() << "\n";
        fichier << parcelle->getForme() << "\n"; // Sauvegarde la forme sous forme de points
    }

    fichier.close();
}

// Afficher la carte avec toutes ses parcelles
void Carte::afficherCarte() const {
    for (const auto& parcelle : parcelles) {
        std::cout << *parcelle << std::endl;
    }
}

// Destructeur pour libérer la mémoire allouée pour les objets Parcelle
Carte::~Carte() {
    for (auto parcelle : parcelles) {
        delete parcelle;
    }
}
