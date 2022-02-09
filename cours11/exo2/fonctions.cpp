#include "entete.hpp"

using namespace std;

pile::pile(int a, int b)
{
    pile::pile(a);

}
        
pile::pile(int a)
{
    Pile.push(a);
}

void pile::ajouter(int a)
{
    Pile.push(a);
}
void supprimer(int);
bool vide();
void affiche();
int rechercher(int);
int sommet();