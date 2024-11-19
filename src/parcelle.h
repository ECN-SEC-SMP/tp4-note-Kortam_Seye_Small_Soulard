/*
Classe Parcelle
La classe Parcelle est une classe abstraite représentant une parcelle cadastrale définie par ses caractéristiques principales.


Attributs privés :

type : string — Le type de la parcelle (exemple : "ZU", "ZA").
numero : int — Le numéro unique de la parcelle.
propriétaire : string — Le nom du propriétaire de la parcelle.
surface : float — La surface en mètres carrés de la parcelle.
forme : Polygone<int> — La forme géométrique de la parcelle, représentée par un polygone.
pConstructible : int — Le pourcentage de la surface constructible de la parcelle.


Constructeurs :

Parcelle(int num, string prop, Polygone<int> forme) : Constructeur initialisant une parcelle avec un numéro, un propriétaire et une forme.
Parcelle(Parcelle parc) : Constructeur de recopie.


Méthodes publiques :

getNumero() : int — Retourne le numéro de la parcelle.
getPropriétaire() : string — Retourne le nom du propriétaire.
getSurface() : float — Retourne la surface de la parcelle.
getForme() : Polygone<int> — Retourne la forme géométrique.
getType() : string — Retourne le type de la parcelle.
setNumero(int n) : void — Modifie le numéro de la parcelle.
setPropriétaire(string prop) : void — Modifie le nom du propriétaire.
setForme(Polygone<int> forme) : void — Modifie la forme géométrique.
setType(string type) — Méthode virtuelle pure qui définit le type de la parcelle.
Règles associées :
La surface doit être recalculée si la forme de la parcelle change.
Une exception doit être levée si la surface est négative ou nulle.


*/