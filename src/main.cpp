#include <iostream>
#include "point2D.h"
#include "parcelle.h"
#include "polygone.h"
#include "ZoneUrbaine.h"
#include "ZoneNaturelle.h"
using namespace std;

int main() {

    vector<Point2D<int>> sommets = {Point2D<int>(0, 0), Point2D<int>(2, 0), Point2D<int>(0, 2),Point2D<int>(2, 2)};
    Polygone<int> poly(sommets);
    ZN* znParcel = new ZN(36, "Liam Smilo", poly);
    cout << *znParcel << endl;

    return 0;

}