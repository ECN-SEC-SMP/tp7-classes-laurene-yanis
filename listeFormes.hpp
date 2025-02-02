#include <iostream>
#include <vector>
#include "Forme.hpp"
#include "rectangle.hpp"
using namespace std;

class ListeFormes{
protected :
    vector<Forme*> tab;
public :
    void ajouter(Forme* shape);
    double surface();
    Rectangle boiteEnglobante();
};