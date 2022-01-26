#ifndef _POINT
#define _POINT

#include <iostream>
#include "liste.hpp"

class point
{ 
    int x, y ;
    
    public :
    point (int , int);
    void affiche ();
};

class liste_point: public liste, public point
{
    public:
    void ajouter(point *);
    point * premier();
    point * prochain();
    void affiche();
};
#endif