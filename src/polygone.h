/*
Classe Polygone
La classe Polygone représente un polygone défini par une liste de sommets de type Point2D.


Attribut privé :

sommets : Vector<Point2D<T>> — La liste des sommets qui composent le polygone.


Constructeurs :

Polygone() : Constructeur par défaut.
Polygone(Vector<Point2D<T>> listeSommets) : Constructeur prenant une liste de sommets.
Polygone(Polygone<T> poly) : Constructeur de recopie prenant un autre polygone comme paramètre.


Méthodes publiques :

getSommets() : Vector<Point2D<T>> — Retourne la liste des sommets.
setSommets(Vector<Point2D<T>> listeSommets) : void — Modifie la liste des sommets.
addPoint(Point2D<T> point) : void — Ajoute un sommet au polygone.
translate(T dx, T dy) : void — Effectue une translation sur tous les sommets du polygone.

*/