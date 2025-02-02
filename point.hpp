#include <ostream>
#ifndef POINT_HPP
#define POINT_HPP
class Point{
private:
    double ordonnees;
    double abscisse;
public :
    void translater(Point const &newpoint);
    void translater(double reel, double translation);

    Point();
    Point(double param1, double param2);
    Point(const Point &newpoint);

    double getOrdonnee() const;
    void setOrdonnee(double ord);

    double getAbscisse() const;
    void setAbscisse(double abs);
    Point& operator+=(const Point& valeur);

};

std::ostream& operator<<(std::ostream& os, Point const& p);

#endif