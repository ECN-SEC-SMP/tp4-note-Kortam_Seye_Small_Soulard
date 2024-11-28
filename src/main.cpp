#include <iostream>
#include "point2D.h"
#include "parcelle.h"
#include "polygone.h"
#include "ZoneAgricole.h"
#include "ZoneUrbaine.h"
#include "ZoneNaturelle.h"
#include "ZoneAUrbaniser.h"
using namespace std;

int main() {

    vector<Point2D<int>> sommets = {Point2D<int>(0, 0), Point2D<int>(2, 0), Point2D<int>(0, 2),Point2D<int>(2, 2)};
    Polygone<int> poly(sommets);
    ZN* znParcel = new ZN(36, "Liam", poly);
    cout << *znParcel << endl;


    vector<Point2D<int>> sommets2 = {Point2D<int>(0, 0), Point2D<int>(1, 0), Point2D<int>(0, 1),Point2D<int>(1, 1)};
    Polygone<int> poly2(sommets2);
    ZA* zaParcel = new ZA(42, "Milo", poly2, "Avoine");
    cout << *zaParcel << endl;

    // Exemple de Parcelle Zone Urbaine
    vector<Point2D<int>> sommets3 = {Point2D<int>(0, 0), Point2D<int>(4, 0), Point2D<int>(4, 3), Point2D<int>(0, 3)};
    Polygone<int> poly3(sommets3);

    // Création d'une Zone Urbaine avec une surface construite et une surface restante
    ZoneUrbaine* zoneUrbaine = new ZoneUrbaine(50, "Elle", poly3, 5.0, 7.0);

    // Affichage des informations de la Zone Urbaine
    zoneUrbaine->afficher(); // Cette méthode doit afficher la zone urbaine

    vector<Point2D<int>> sommets4 = {Point2D<int>(0, 0), Point2D<int>(3, 0), Point2D<int>(0, 3),Point2D<int>(3, 3)};
    Polygone<int> poly4(sommets4);
    ZAU* zauParcel = new ZAU(35, "MiloZouZou", poly4, 0.45);
    cout << *zauParcel << endl;



    return 0;

}