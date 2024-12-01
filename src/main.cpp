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
    try {
        /** Charger les données du fichier */
        carte.lireDepuisFichier("Parcelles.txt"); 

        /** Afficher la carte chargée */
        carte.afficherCarte();

        /** Sauvegarder la carte dans un nouveau fichier */
        carte.sauvegarderDansFichier("SauvegardeParcelles.txt"); 
        cout << "Carte sauvegardée avec succès dans 'SauvegardeParcelles.txt'." << endl;
        
    } catch (const std::exception& e) {
        /** En cas d'erreur lors de l'ouverture ou du traitement du fichier */
        cerr << e.what() << endl;
    }

    return 0;
}
