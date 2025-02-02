#include <iostream>
#include "Forme.hpp"


Forme& Forme::operator+=(const Point& valeur){
    centre.translater(valeur);
    return *this;
}

std::ostream& operator<<(std::ostream& os, Forme const& forme) {
    os << "Centre : " << forme.getCentre();
    return os;
}

void Forme::setCentre(Point centre) {
    this->centre = centre;
}

Point Forme::getCentre() const{
    return this->centre;
}