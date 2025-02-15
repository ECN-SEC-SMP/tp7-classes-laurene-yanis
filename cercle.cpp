#include "cercle.hpp"

double Cercle::perimetre(){
    return 2*3.14159265*rayon;
}

double Cercle::surface(){
    return 3.14159265*rayon*rayon;
}

Cercle::Cercle(Point centre, double rayon){
    this->rayon = rayon;
    this->setCentre(centre);
}

void Cercle::setRayon(double ray){
    this->rayon = ray;
}
double Cercle::getRayon() const{
    return this->rayon;
}

std::ostream &operator<<(std::ostream &os, Cercle const &forme)
{
    os << "Cercle: \n"
     << "Centre: " << forme.getCentre() << std::endl
     << "Rayon: " << forme.getRayon() << std::endl;
    return os;
}
