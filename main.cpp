#include <iostream>
#include "point.hpp"

using namespace std;

int main(){
    Point point1 =Point();
    Point point2 =Point(5,2);
    Point point3 =Point(point2);

    double ord = point1.getOrdonnee();
    double absc = point1.getAbscisse();

    cout<<"Point3 : Ordonnée "<<point3.getOrdonnee()<<" Abscisse "<<point3.getAbscisse()<<endl;
    cout<<"Point2 : Ordonnée "<<point2.getOrdonnee()<<" Abscisse "<<point2.getAbscisse()<<endl;
    cout<<"Point1 : Ordonnée "<<ord<<" Abscisse "<<absc<<endl;

    point1.translater(point2);
    point2.translater(10, 10);

    cout<<"Point1 : Ordonnée "<<point1.getOrdonnee()<<" Abscisse "<<point1.getAbscisse()<<endl;
    cout<<"Point2 : Ordonnée "<<point2.getOrdonnee()<<" Abscisse "<<point2.getAbscisse()<<endl;

    point3.setOrdonnee(20);
    point3.setAbscisse(20);

    cout<<"Point3 : Ordonnée "<<point3.getOrdonnee()<<" Abscisse "<<point3.getAbscisse()<<endl;
    cout << point3<<endl;
    point1+= point2;
    cout << point1;
    return 0;
}