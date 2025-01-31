#include "Forme.hpp"

class Rectangle : public Forme{
protected :
    double longueur;
    double largeur;

public :
    Rectangle(Point centre, double longueur, double largeur);
    double perimetre();
    double surface();
};

