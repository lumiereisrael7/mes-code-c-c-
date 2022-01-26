#include "liste_point.hpp"

using namespace std;

point::point (int abs=0, int ord=0) 
{ 
    x=abs ; 
    y=ord ; 
}

void point::affiche () 
{ 
    cout << "Coordonnées : " << x <<" " << y << "\n" ;
}

void liste_point::affiche()
{
    premier()->point::affiche();

    while(!fini())
    {
        cout << endl;
        prochain()->point::affiche();
    }
}

void liste_point::ajouter(point * p)
{
    liste::ajouter((point *) p);
}


point * liste_point::premier()
{
    return (point *) liste::premier();   
}

point * liste_point::prochain()
{
    return (point *) liste::prochain();
}