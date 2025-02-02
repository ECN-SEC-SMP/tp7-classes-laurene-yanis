#include <iostream>
#include <vector>
#include "Forme.hpp"
#include "rectangle.hpp"
using namespace std;

class ListeFormes{
protected :
    double surface;
    vector<Forme> tab;
public :
    ListeFormes(vector<Forme> tab);
    void ajouter(Forme shape);
    double surface();
    Rectangle boiteEnglobante();
};