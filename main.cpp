#include <iostream>
#include "carre.hpp"
#include "cercle.hpp"
#include "listeFormes.hpp"

using namespace std;

int main(){
    Point point1 =Point();
    Point point2 =Point(5,2);
    Point point3 =Point(point2);

    double ord = point1.getOrdonnee();
    double absc = point1.getAbscisse();

    cout<<"Point3 : Ordonnée "<<point3.getOrdonnee()<<" Abscisse "<<point3.getAbscisse()<< " (attendus 5 2)" <<endl;
    cout<<"Point2 : Ordonnée "<<point2.getOrdonnee()<<" Abscisse "<<point2.getAbscisse()<< " (attendus 5 2)"<<endl;
    cout<<"Point1 : Ordonnée "<<ord<<" Abscisse "<<absc << " (attendus 0 0)"<<endl;

    point1.translater(point2);
    point2.translater(10, 10);

    cout<<"Point1 : Ordonnée "<<point1.getOrdonnee()<<" Abscisse "<<point1.getAbscisse() << " (attendus 5 2)" <<endl;
    cout<<"Point2 : Ordonnée "<<point2.getOrdonnee()<<" Abscisse "<<point2.getAbscisse() << " (attendus 15 12)"<<endl;

    point3.setOrdonnee(20);
    point3.setAbscisse(20);

    cout<<"Point3 : Ordonnée "<<point3.getOrdonnee()<<" Abscisse "<<point3.getAbscisse() << " (attendus 20 20)"<<endl;
    cout << point3<<endl;
    point1+= point2;
    cout << point1<< " (attendus 14 20)" << endl;


    //Test essai objet Cercle :
    Cercle cercle = Cercle(point3, 22);
    cout<<cercle;
    cout<<"Périmètre (attendu ~138): " << cercle.perimetre() << endl; 
    cout<<"Surface (attendu ~1520): " << cercle.surface() << endl;
    //Test essai objet Rectangle :
    Rectangle rect1 = Rectangle(point2, 5, 3);//creation d'un type rectangle
    cout<<rect1;
    cout<<"Périmètre (attendu 16): " << rect1.perimetre() << endl; 
    cout<<"Surface (attendu 15): " << rect1.surface() << endl;

    //Test essai objet Carre :
    Carre carre = Carre(point1, 10);
    cout << carre;
    cout<<"Périmètre (attendu 40): " << carre.perimetre() << endl; 
    cout<<"Surface (attendu 100): " << carre.surface() << endl;

    ListeFormes liste = ListeFormes();

    liste.ajouter(&cercle);
    liste.ajouter(&rect1);
    liste.ajouter(&carre);

    cout << "Surface liste (attendu ~1635): " << liste.surface() << endl;

    return 0;
}