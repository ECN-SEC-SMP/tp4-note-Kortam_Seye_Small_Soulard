#ifndef PARCELLE_H
#define PARCELLE_H

#include <string>
#include "polygone.h"

using namespace std; 

class Parcelle {

private:
protected:
    string type;
    int numero;
    string proprietaire;
    float surface;
    Polygone<int> forme;
    int pConstructible;

    void calculerSurface();

public:
    Parcelle(int num, string prop, Polygone<int> forme);
    //Parcelle(const Parcelle& parc);

    int getNumero() const;
    string getProprietaire() const;
    float getSurface() const;
    Polygone<int> getForme() const;
    string getType() const;

    void setNumero(int n);
    void setProprietaire(string prop);
    void setForme(Polygone<int> forme);
    virtual void setType(string type) = 0;


    class SurfaceException : public exception {
    public:
        const char* what() const noexcept override {
            return "Surface cannot be negative or zero.";
        }
    };
    friend ostream& operator<<(ostream& os, const Parcelle& parcelle) {
        os << "Numero: " << parcelle.numero << endl;
        os << "Proprietaire: " << parcelle.proprietaire << endl;
        os << "Surface: " << parcelle.surface << endl;
        os << "Forme: " << parcelle.forme << endl;
        os << "Type: " << parcelle.type << endl;
        return os;
    }

};

#endif // PARCELLE_H