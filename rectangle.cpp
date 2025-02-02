#include <iostream>
#include "rectangle.hpp"
using namespace std;

Rectangle::Rectangle(Point centre, double longueur, double largeur){
    this->longueur = longueur;
    this->largeur = largeur;
    this->setCentre(centre);
}

double Rectangle::perimetre(){
    return (2*longueur)+(2*largeur);
}

double Rectangle::surface(){
    return longueur*largeur;
}

double Rectangle::getLongueur() const{
    return this->longueur;
}

double Rectangle::getLargeur() const{
    return this->largeur;
}

void Rectangle::setLongueur(double length){
    this->longueur = length;
}

void Rectangle::setLargeur(double width){
    this->largeur = width;
}