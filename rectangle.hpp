#pragma once
#include "Forme.hpp"

class Rectangle : public Forme{
protected :
    double longueur;
    double largeur;

public :
    Rectangle(Point centre, double longueur, double largeur);
    double perimetre();
    double surface();
    
    double getLongueur() const;
    double getLargeur() const;
    void setLongueur(double length);
    void setLargeur(double width);
};

std::ostream& operator<<(std::ostream& os, Rectangle const& forme);