/**
 * @file parcelle.h
 * @authors KORTAM Nirmine, SEYE Fatou,
 *          MILO SOULARD, LIAM SMALL
 * @date 28/11/2024
 * @brief Création de la classe Parcelle, attributs et méthodes, 
 */


#ifndef PARCELLE_H
#define PARCELLE_H

#include <string>
#include "point2D.h"
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

    /** Méthode pour calculer la surface */
    void calculerSurface();

public:
    Parcelle();
    Parcelle(int num, string prop, Polygone<int> forme);

    /** Getters*/
    int getNumero() const;
    string getProprietaire() const;
    float getSurface() const;
    Polygone<int> getForme() const;
    string getType() const;

    /** Setters*/
    void setNumero(int n);
    void setProprietaire(string prop);
    void setForme(Polygone<int> forme);
    virtual void setType(string type) = 0;

    /** Classe d'exception pour gérer les erreurs de surface */
    class SurfaceException : public exception {
    public:
        const char* what() const noexcept override {
            return "Surface cannot be negative or zero.";
        }
    };

    /** Surcharge opérateur >> pour affichage */
    friend ostream& operator<<(ostream& os, const Parcelle& parcelle) {
        os << "Numero: " << parcelle.numero << endl;
        os << "Type: " << parcelle.type << endl;
        os << parcelle.forme << endl;
        os << "Proprietaire: " << parcelle.proprietaire << endl;
        os << "Surface: " << parcelle.getSurface() << endl;
        return os;
    }

    /** Ajout d'un destructeur virtuel pour permettre une suppression correcte des objets dérivés */
    virtual ~Parcelle() {}

};

#endif // PARCELLE_H