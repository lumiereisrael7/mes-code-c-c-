#include "liste.hpp"

using namespace std;

liste::liste()
{
    current = debut = 0;
}

liste::~liste()
{
    element * tmp = 0;
    while(!fini())
    {
        tmp = debut;

        debut = debut->suivant;

        delete tmp;
    }
}

void liste::ajouter(void * c)
{
    element * tmp = new element;

    tmp->suivant = debut;
    tmp->contenu = c;

    if(!current)
        current = tmp;

    debut = tmp;
}

void * liste::premier()
{
    current = debut;

    return debut->contenu;
}

void * liste::prochain()
{
    if(fini())
    {
        cout << "Nous sommes en fin de liste"  <<endl;

        return 0;
    }

    current = current->suivant;

    return current->contenu;
}

int liste::fini()
{
    if(current->suivant)
        return 0;
    
    return 1;
}