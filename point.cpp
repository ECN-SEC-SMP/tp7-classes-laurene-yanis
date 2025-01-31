#include <iostream>
#include "point.hpp"
using namespace std;

void Point::translater(Point const &newpoint){
    ordonnees += newpoint.getOrdonnee();
    abscisse += newpoint.getAbscisse();
}

void Point::translater(double ordo, double absc){
    ordonnees += ordo;
    abscisse += absc;
}

double Point::getOrdonnee() const{
    return ordonnees;
}

void Point::setOrdonnee(double ord){
    ordonnees = ord;
}

double Point::getAbscisse() const{
    return abscisse;
}

void Point::setAbscisse(double abs){
    abscisse = abs;
}

Point::Point(){
    ordonnees = 0;
    abscisse = 0;
}

Point::Point(double param1, double param2){
    ordonnees = param1;
    abscisse = param2;
}

Point::Point(const Point &newpoint){
    ordonnees = newpoint.getOrdonnee();
    abscisse = newpoint.getAbscisse();
}

std::ostream& operator<<(std::ostream& os, Point const& p) {
    os << "Abscisse : " << p.getAbscisse() << " Ordonnée: " << p.getOrdonnee();
    return os;
}

Point& Point::operator+=(const Point& valeur){
    translater(valeur);
    return *this;
}