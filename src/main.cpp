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

    vector<Point2D<int>> sommets3 = {Point2D<int>(0, 0), Point2D<int>(1, 0), Point2D<int>(0, 1),Point2D<int>(1, 1)};
    Polygone<int> poly3(sommets3);
    ZAU* zauParcel = new ZAU(42, "Nirmine", poly3, 0.2);
    cout << *zauParcel << endl;

    return 0;

}