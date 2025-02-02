#include "rectangle.hpp"

class Carre : public Rectangle{
    
public :
    Carre(Point centre, double cote);
};

std::ostream& operator<<(std::ostream& os, Carre const& forme);