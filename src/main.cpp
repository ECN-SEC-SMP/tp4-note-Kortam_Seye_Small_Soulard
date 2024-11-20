#include <iostream>
#include "point2D.h"
#include "parcelle.h"
#include "polygone.h"

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

    // Create points for the polygon
    Point2D<int> p1(0, 0);
    Point2D<int> p2(1, 0);
    Point2D<int> p3(1, 1);
    Point2D<int> p4(0, 1);
    //print les points 
    cout << "Point 1: " << p1 << endl;
    cout << "Point 2: " << p2 << endl;
    cout << "Point 3: " << p3 << endl;
    cout << "Point 4: " << p4 << endl;
    
    // Create a polygon with the points
    //std::
    vector<Point2D<int>> points = {p1, p2, p3, p4};
    Polygone<int> polygone(points);

    // Display initial polygon points
    /*cout << "Initial Polygon Points:" << endl;
    for (const auto& point : polygone.getSommets()) {
        cout << "(" << point.getX() << ", " << point.getY() << ")" << endl;
    }*/
    cout << "Polygone : " << polygone << endl;
    // Translate polygon
    polygone.translate(2, 3);
    cout << "Polygone translate : " << polygone << endl;

    // Display translated polygon points
    /*cout << "Translated Polygon Points:" << endl;
    for (const auto& point : polygone.getSommets()) {
        cout << "(" << point.getX() << ", " << point.getY() << ")" << endl;
    }*/


    return 0;
}