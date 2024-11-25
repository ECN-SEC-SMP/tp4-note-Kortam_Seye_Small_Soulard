#include "parcelle.h"

using namespace std;

Parcelle::Parcelle(int num, string prop, Polygone<int> forme)
        :numero(num), proprietaire(prop), forme(forme){}
        

    
int Parcelle::getNumero() const{
    return numero; 
}

string Parcelle::getProprietaire() const{
    return proprietaire;
}

float Parcelle::getSurface() const{
    return surface; 
}

Polygone<int> Parcelle::getForme() const{
    return forme;
}

string Parcelle::getType() const{
    return type;
}

void Parcelle::setNumero(int n){
    this->numero=n;
}
void Parcelle::setProprietaire(string prop){
    this->proprietaire=prop; 
}
void Parcelle::setForme(Polygone<int> forme){
    this ->forme=forme; 
}

