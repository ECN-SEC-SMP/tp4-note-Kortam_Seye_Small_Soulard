/**
 * @file parcelle.cpp
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Implémentation de la classe Parcelle,
 */


#include "parcelle.h"
#include "polygone.h"
#include "point2D.h"
#include <algorithm>
#include "math.h"

using namespace std;

Parcelle::Parcelle(){
    numero=0;
    proprietaire="";
    forme=Polygone<int>();
}

/** Constucteur de Parcelle contenant le numéro de la parcelle, le propriétaire, la forme */
Parcelle::Parcelle(int num, string prop, Polygone<int> forme)
        :numero(num), proprietaire(prop), forme(forme){}
    
/** getter du numéro de parcelle */
int Parcelle::getNumero() const{
    return numero; 
}

/** getter nom du propriétaire  */
string Parcelle::getProprietaire() const{
    return proprietaire;
}

/** calcule de la surface de parcelle */
float Parcelle::getSurface() const{

    vector<Point2D<int>> sommets = forme.getSommets();
    if (sommets.size() < 3) return 0.0; 

    Point2D<int> pivot = *min_element(sommets.begin(), sommets.end(), [](const Point2D<int>& a, const Point2D<int>& b) {
        return (a.getY() < b.getY()) || (a.getY() == b.getY() && a.getX() < b.getX());
    });

    sort(sommets.begin(), sommets.end(), [&](const Point2D<int>& a, const Point2D<int>& b) {
        double angleA = atan2(a.getY() - pivot.getY(), a.getX() - pivot.getX());
        double angleB = atan2(b.getY() - pivot.getY(), b.getX() - pivot.getX());
        return angleA < angleB;
    });

    float surface = 0.0;
    int n = sommets.size();
    for (int i = 0; i < n; i++) {
        Point2D<int> p1 = sommets[i];
        Point2D<int> p2 = sommets[(i + 1) % n]; 
        surface += p1.getX() * p2.getY() - p2.getX() * p1.getY();
    }

    return abs(surface) / 2.0; 
}

/** fome de parcelle */
Polygone<int> Parcelle::getForme() const{
    return forme;
}

/** type de parcelle */
string Parcelle::getType() const{
    return type;
}

/** définition numéro de parcelle */
void Parcelle::setNumero(int n){
    this->numero=n;
}

/** définition nom de propriétaire  */
void Parcelle::setProprietaire(string prop){
    this->proprietaire=prop; 
}

/** définition de la forme de parcelle */
void Parcelle::setForme(Polygone<int> forme){
    this ->forme=forme; 
}

