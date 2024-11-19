#include <iostream>
#include "point2D.h"

using namespace std;

int main() {
    
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

    return 0;
}