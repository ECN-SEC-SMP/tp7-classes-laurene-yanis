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
