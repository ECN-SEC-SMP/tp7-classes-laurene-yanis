#ifndef FORME_HPP
#define FORME_HPP

#include "point.hpp"

class Forme{
protected :
    Point centre;

    
public :

    Point getCentre() const;
    void setCentre(Point centre);

    Forme& operator+=(const Point& valeur);

    virtual double perimetre() = 0;
    virtual double surface() = 0;

};

std::ostream& operator<<(std::ostream& os, Forme const& forme);

#endif