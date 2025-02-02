#include "carre.hpp"

Carre::Carre(Point centre, double cote): Rectangle(centre,cote, cote){
    
}
double Carre::getLongueur() const{
    return this->longueur;
}

double Carre::getLargeur() const{
    return this->largeur;
}

void Carre::setLongueur(double length){
    this->longueur = length;
}

void Carre::setLargeur(double width){
    this->largeur = width;
}