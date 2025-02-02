#include "listeFormes.hpp"
using namespace std;
#include <typeinfo>

double ListeFormes::surface(){
    double s=0;
    for(int i=0;i<this->tab.size();i++){
        s += this->tab[i]->surface();
    }
    return s;
}

void ListeFormes::ajouter(Forme* shape){
    this->tab.push_back(shape);
}


/* Rectangle ListeFormes::boiteEnglobante(){
    double longueur;
    double largeur;
    double diametre;
    vector<double> somme;

    for(int i = 0; i<this->tab.size(); i++){
        const char* typeName = typeid(tab[i]).name();
        if (typeName == (const char*)'R') somme[i] += tab[i].getLargeur();
        else if (typeName == (const char*)'C') somme[i] += 2*tab[i].getRayon();
        longueur = tab[i].getLongueur();
        double a = min(largeur, longueur);
    }
    //faire tab.size() somme de soit longueur soit largeur de chaque forme dans tab
    //ensuite comparé les sommes pour garder la somme minimum qui fera par exemple la largeur du rect
    //ensuite pareil pour longueur en excluant la combinaison gardé


    double mthd = min(s1, s2);
} */