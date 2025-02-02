#include "Forme.hpp"

class Cercle : public Forme{
private :
    double rayon;
public :
    Cercle(Point centre, double rayon);
    double perimetre();
    double surface();

    void setRayon(double ray);
    double getRayon() const;
};

std::ostream& operator<<(std::ostream& os, Cercle const& forme);