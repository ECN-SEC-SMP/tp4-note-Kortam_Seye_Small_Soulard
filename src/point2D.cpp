#include "point2D.h"

template <typename T>
Point2D<T>::Point2D(T x, T y) : x(x), y(y) {}

template <typename T>
Point2D<T>::Point2D() : x(T()), y(T()) {}

template <typename T>
Point2D<T>::Point2D(const Point2D<T>& p) : x(p.x), y(p.y) {}

template <typename T>
T Point2D<T>::getX() const {
    return x;
}

template <typename T>
T Point2D<T>::getY() const {
    return y;
}

template <typename T>
void Point2D<T>::setX(T x) {
    this->x = x;
}

template <typename T>
void Point2D<T>::setY(T y) {
    this->y = y;
}

template <typename T>
void Point2D<T>::translate(T dx, T dy) {
    x += dx;
    y += dy;
}

template class Point2D<int>;
template class Point2D<float>;
template class Point2D<double>;