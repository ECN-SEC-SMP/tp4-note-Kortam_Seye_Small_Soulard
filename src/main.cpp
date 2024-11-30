#include <iostream>
#include "point2D.h"
#include "parcelle.h"
#include "polygone.h"
#include "ZoneAgricole.h"
#include "ZoneUrbaine.h"
#include "ZoneNaturelle.h"
#include "ZoneAUrbaniser.h"
#include "Carte.h"

using namespace std;

int main() {
    /** Créer un objet Carte */
    Carte carte;

    // Création manuelle des parcelles pour test
    vector<Point2D<int>> sommets1 = {Point2D<int>(0, 0), Point2D<int>(1, 0), Point2D<int>(0, 1), Point2D<int>(1, 1)};
    Polygone<int> poly1(sommets1);
    ZN* znParcel = new ZN(36, "Liam", poly1);

    vector<Point2D<int>> sommets2 = {Point2D<int>(0, 0), Point2D<int>(2, 0), Point2D<int>(0, 2), Point2D<int>(2, 2)};
    Polygone<int> poly2(sommets2);
    ZA* zaParcel = new ZA(42, "Milo", poly2, "Avoine");

    vector<Point2D<int>> sommets3 = {Point2D<int>(0, 0), Point2D<int>(3, 0), Point2D<int>(0, 3), Point2D<int>(3, 3)};
    Polygone<int> poly3(sommets3);
    ZAU* zauParcel = new ZAU(35, "Nirmine", poly3, 0.45);

    vector<Point2D<int>> sommets4 = {Point2D<int>(0, 0), Point2D<int>(4, 0), Point2D<int>(0, 4), Point2D<int>(4, 4)};
    Polygone<int> poly4(sommets4);
    ZoneUrbaine* zuParcel = new ZoneUrbaine(45, "Fatou", poly4, 0.11, 0.44);

    // Ajouter les parcelles à la carte
    carte.ajouterParcelle(znParcel);
    carte.ajouterParcelle(zaParcel);
    carte.ajouterParcelle(zauParcel);
    carte.ajouterParcelle(zuParcel);

    // Afficher la carte
    carte.afficherCarte();

    // Sauvegarder la carte dans un fichier
    try {
        carte.sauvegarderDansFichier("SauvegardeParcellesTest.txt");
        cout << "Carte sauvegardée avec succès dans 'SauvegardeParcellesTest.txt'." << endl;
    } catch (const std::exception& e) {
        cerr << e.what() << endl;
    }

    // Nettoyage mémoire
    delete znParcel;
    delete zaParcel;
    delete zauParcel;
    delete zuParcel;

    return 0;
}
