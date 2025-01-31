#include "point.hpp"

class Forme{
private :
    Point centre;
    
public :

    Point getCentre() const;
    void setCentre(Point centre) const;

    Forme& operator+=(const Point& valeur);

    double perimetre();
    double surface();
};

std::ostream& operator<<(std::ostream& os, Forme const& forme);