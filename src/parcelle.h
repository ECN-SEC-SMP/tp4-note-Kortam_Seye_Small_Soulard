#ifndef PARCELLE_H
#define PARCELLE_H

#include <string>
#include "polygone.h"

class Parcelle {
private:
    std::string type;
    int numero;
    std::string propriétaire;
    float surface;
    Polygone<int> forme;
    int pConstructible;

    void calculerSurface();

public:
    Parcelle(int num, std::string prop, Polygone<int> forme);
    Parcelle(const Parcelle& parc);

    int getNumero() const;
    std::string getPropriétaire() const;
    float getSurface() const;
    Polygone<int> getForme() const;
    std::string getType() const;

    void setNumero(int n);
    void setPropriétaire(std::string prop);
    void setForme(Polygone<int> forme);
    virtual void setType(std::string type) = 0;

    class SurfaceException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Surface cannot be negative or zero.";
        }
    };
};

#endif // PARCELLE_H