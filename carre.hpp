#include "rectangle.hpp"

class Carre : public Rectangle{
    
public :
    Carre(Point centre, double cote);
    double getLongueur() const;
    double getLargeur() const;
    void setLongueur(double length);
    void setLargeur(double width);
};