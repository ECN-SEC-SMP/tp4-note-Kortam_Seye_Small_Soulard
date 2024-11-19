#ifndef POINT2D_H
#define POINT2D_H

template <typename T>
class Point2D {
private:
    T x; 
    T y; 

public:

    Point2D(T x, T y);
    Point2D();
    Point2D(const Point2D<T>& p);

    T getX() const;
    T getY() const;

    void setX(T x);
    void setY(T y);

    void translate(T dx, T dy);
};

#endif