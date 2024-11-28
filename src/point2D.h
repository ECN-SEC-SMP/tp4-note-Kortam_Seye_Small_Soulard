#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

// Classe template pour représenter un point 2D
template <typename T>
class Point2D {
private:
    T x; // Coordonnée X
    T y; // Coordonnée Y

public:
    // Constructeurs
    Point2D(T x, T y) : x(x), y(y) {}       // Constructeur paramétré
    Point2D() : x(0), y(0) {}               // Constructeur par défaut
    Point2D(const Point2D<T>& p) : x(p.x), y(p.y) {} // Constructeur par recopie

    // Accesseurs
    T getX() const { return x; }
    T getY() const { return y; }

    // Mutateurs
    void setX(T x) { this->x = x; }
    void setY(T y) { this->y = y; }

    // Translation du point
    void translate(T dx, T dy) {
        x += dx;
        y += dy;
    }

    // Surcharge de l'opérateur << pour afficher les coordonnées
    friend std::ostream& operator<<(std::ostream& os, const Point2D<T>& point) {
        os << "[" << point.x << ";" << point.y << "]";
        return os;
    }
};

#endif // POINT2D_H
