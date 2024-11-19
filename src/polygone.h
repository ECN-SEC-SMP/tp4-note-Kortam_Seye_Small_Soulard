#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include "point2d.h"

template <typename T>
class Polygone {
private:
    std::vector<Point2D<T>> sommets;

public:

    Polygone() = default;

    Polygone(const std::vector<Point2D<T>>& listeSommets) : sommets(listeSommets) {}

    Polygone(const Polygone<T>& poly) : sommets(poly.sommets) {}


    std::vector<Point2D<T>> getSommets() const {
        return sommets;
    }

    void setSommets(const std::vector<Point2D<T>>& listeSommets) {
        sommets = listeSommets;
    }

    void addPoint(const Point2D<T>& point) {
        sommets.push_back(point);
    }

    void translate(T dx, T dy) {
        for (auto& sommet : sommets) {
            sommet.translate(dx, dy);
        }
    }
};

#endif // POLYGONE_H