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