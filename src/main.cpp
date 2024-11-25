#include <iostream>
#include "point2D.h"
#include "parcelle.h"
#include "polygone.h"
#include "ZoneUrbaine.h"
#include "ZoneNaturelle.h"
using namespace std;

int main() {
    /*
    Point2D<int> pointInt(1, 2);
    Point2D<float> pointFloat(1.5f, 2.5f);
    Point2D<double> pointDouble(1.1, 2.2);

    // Display initial points
    cout << "Initial Points:" << endl;
    cout << "PointInt: (" << pointInt.getX() << ", " << pointInt.getY() << ")" << endl;
    cout << "PointFloat: (" << pointFloat.getX() << ", " << pointFloat.getY() << ")" << endl;
    cout << "PointDouble: (" << pointDouble.getX() << ", " << pointDouble.getY() << ")" << endl;

    // Translate points
    pointInt.translate(3, 4);
    pointFloat.translate(1.5f, 2.5f);
    pointDouble.translate(0.9, 1.8);

    // Display translated points
    cout << "Translated Points:" << endl;
    cout << "PointInt: (" << pointInt.getX() << ", " << pointInt.getY() << ")" << endl;
    cout << "PointFloat: (" << pointFloat.getX() << ", " << pointFloat.getY() << ")" << endl;
    cout << "PointDouble: (" << pointDouble.getX() << ", " << pointDouble.getY() << ")" << endl;

    // Set new values
    pointInt.setX(10);
    pointInt.setY(20);
    pointFloat.setX(10.5f);
    pointFloat.setY(20.5f);
    pointDouble.setX(10.1);
    pointDouble.setY(20.2);

    // Display points with new values
    cout << "Points with New Values:" << endl;
    cout << "PointInt: (" << pointInt.getX() << ", " << pointInt.getY() << ")" << endl;
    cout << "PointFloat: (" << pointFloat.getX() << ", " << pointFloat.getY() << ")" << endl;
    cout << "PointDouble: (" << pointDouble.getX() << ", " << pointDouble.getY() << ")" << endl;
    */
    /*
    // Create points for the polygon
    Point2D<int> p1(0, 0);
    Point2D<int> p2(1, 0);
    Point2D<int> p3(1, 1);
    Point2D<int> p4(0, 1);
    std::cout << endl << "Point1 : " << p1 << endl;
    */

    /*std::vector<Point2D<int>> points = {p1, p2, p3, p4};
    Polygone<int> polygone(points);

    std::cout << endl << "Polygone : " << polygone << endl;
    // Translate polygon
    polygone.translate(2, 3);
    std::cout << "Polygone translate : " << polygone << endl << endl;
    */

    // Display translated polygon points
    /*cout << "Translated Polygon Points:" << endl;
    for (const auto& point : polygone.getSommets()) {
        cout << "(" << point.getX() << ", " << point.getY() << ")" << endl;
    }*/

   // on peut pas faire de parcelle car virtuelle pure 

    /*   
    // Create a parcel with the polygon and set attributes
    Parcelle* parcelle = new Parcelle(1, "John Doe", polygone);

    // Display the parcel details
    cout << "Parcelle Details:" << endl;
    cout << *parcelle << endl;

    // Clean up
    delete parcelle;
    */
    /*
    // Create a ZN parcel with the polygon and set attributes
    ZN* znParcel = new ZN(67, "Liam Smelly", polygone);

    // Display the ZN parcel details
    cout << "ZN Parcel Details:" << endl;
    cout << *znParcel << endl;

    // Clean up
    //delete znParcel;
    */

 // Création d'un point 2D
    Point2D<int> p1(0, 0);
    std::cout << "Point1 : " << p1 << std::endl;

    // Création d'un polygone avec une liste initiale de sommets
    std::vector<Point2D<int>> sommets = {p1, Point2D<int>(1, 0), Point2D<int>(0, 1)};
    Polygone<int> poly(sommets);

    std::cout << "Polygone initial : " << poly << std::endl;

    // Ajout d'un nouveau sommet
    Point2D<int> p2(1, 1);
    poly.addPoint(p2);
    std::cout << "Après ajout d'un sommet : " << poly << std::endl;

    // Translation du polygone
    poly.translate(2, 3);
    std::cout << "Après translation : " << poly << std::endl;
    return 0;
}