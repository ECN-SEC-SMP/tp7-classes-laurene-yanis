#include "carre.hpp"

Carre::Carre(Point centre, double cote): Rectangle(centre,cote, cote){
    
}

std::ostream &operator<<(std::ostream &os, Carre const &forme)
{
    os << "Carre: \n"
     << "Centre: " << forme.getCentre() << std::endl
     << "Côté: " << forme.getLongueur() << std::endl;
    return os;
}
