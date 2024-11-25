#ifndef POLYGONE_H
#define POLYGONE_H

#include <vector>
#include <iostream>
#include "point2d.h"

// Classe template pour représenter un polygone
template <typename T>
class Polygone {
private:
    std::vector<Point2D<T>> sommets; // Liste des sommets du polygone

public:
    // Constructeur par défaut
    Polygone() = default;

    // Constructeur avec une liste de sommets
    Polygone(const std::vector<Point2D<T>>& listeSommets) : sommets(listeSommets) {}

    // Constructeur de copie
    Polygone(const Polygone<T>& poly) : sommets(poly.sommets) {}

    // Accesseur pour obtenir les sommets
    std::vector<Point2D<T>> getSommets() const { return sommets; }

    // Mutateur pour définir les sommets
    void setSommets(const std::vector<Point2D<T>>& listeSommets) { sommets = listeSommets; }

    // Ajouter un point au polygone
    void addPoint(const Point2D<T>& point) { sommets.push_back(point); }

    // Translater tous les sommets du polygone
    void translate(T dx, T dy) {
        for (auto& sommet : sommets) {
            sommet.translate(dx, dy);
        }
    }

    // Surcharge de l'opérateur << pour afficher les sommets
    friend std::ostream& operator<<(std::ostream& os, const Polygone<T>& poly) {
        os << "Polygone : ";
        for (const auto& sommet : poly.sommets) {
            os << sommet << " ";
        }
        return os;
    }
};

#endif // POLYGONE_H
